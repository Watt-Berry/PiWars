// python wrapper for vtkExtractSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelection(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelection_ClassNew(); }


static PyObject *
PyvtkExtractSelection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelection *tempr = vtkExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelection::NewInstance());

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
PyvtkExtractSelection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveTopology(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetPreserveTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveTopology() :
      op->vtkExtractSelection::GetPreserveTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOn();
    }
    else
    {
      op->vtkExtractSelection::PreserveTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOff();
    }
    else
    {
      op->vtkExtractSelection::PreserveTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetHyperTreeGridToUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridToUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHyperTreeGridToUnstructuredGrid() :
      op->vtkExtractSelection::GetHyperTreeGridToUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetHyperTreeGridToUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHyperTreeGridToUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHyperTreeGridToUnstructuredGrid(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetHyperTreeGridToUnstructuredGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_HyperTreeGridToUnstructuredGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HyperTreeGridToUnstructuredGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HyperTreeGridToUnstructuredGridOn();
    }
    else
    {
      op->vtkExtractSelection::HyperTreeGridToUnstructuredGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_HyperTreeGridToUnstructuredGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HyperTreeGridToUnstructuredGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HyperTreeGridToUnstructuredGridOff();
    }
    else
    {
      op->vtkExtractSelection::HyperTreeGridToUnstructuredGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelection_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelection\nC++: static vtkExtractSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelection\nC++: vtkExtractSelection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSelectionConnection", PyvtkExtractSelection_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {"SetPreserveTopology", PyvtkExtractSelection_SetPreserveTopology, METH_VARARGS,
   "SetPreserveTopology(self, _arg:bool) -> None\nC++: virtual void SetPreserveTopology(bool _arg)\n\nThis flag tells the extraction filter not to extract a subset of\nthe data, but instead to produce a vtkInsidedness array and add\nit to the input dataset. Default value is false(0).\n"},
  {"GetPreserveTopology", PyvtkExtractSelection_GetPreserveTopology, METH_VARARGS,
   "GetPreserveTopology(self) -> bool\nC++: virtual bool GetPreserveTopology()\n\n"},
  {"PreserveTopologyOn", PyvtkExtractSelection_PreserveTopologyOn, METH_VARARGS,
   "PreserveTopologyOn(self) -> None\nC++: virtual void PreserveTopologyOn()\n\n"},
  {"PreserveTopologyOff", PyvtkExtractSelection_PreserveTopologyOff, METH_VARARGS,
   "PreserveTopologyOff(self) -> None\nC++: virtual void PreserveTopologyOff()\n\n"},
  {"GetHyperTreeGridToUnstructuredGrid", PyvtkExtractSelection_GetHyperTreeGridToUnstructuredGrid, METH_VARARGS,
   "GetHyperTreeGridToUnstructuredGrid(self) -> bool\nC++: virtual bool GetHyperTreeGridToUnstructuredGrid()\n\nSet/Get a flag controlling whether to output an Unstructured Grid\n(true) or an HyperTreeGrid (false) when input is a HyperTreeGrid\n\nDefault is set to false\n"},
  {"SetHyperTreeGridToUnstructuredGrid", PyvtkExtractSelection_SetHyperTreeGridToUnstructuredGrid, METH_VARARGS,
   "SetHyperTreeGridToUnstructuredGrid(self, _arg:bool) -> None\nC++: virtual void SetHyperTreeGridToUnstructuredGrid(bool _arg)\n\n"},
  {"HyperTreeGridToUnstructuredGridOn", PyvtkExtractSelection_HyperTreeGridToUnstructuredGridOn, METH_VARARGS,
   "HyperTreeGridToUnstructuredGridOn(self) -> None\nC++: virtual void HyperTreeGridToUnstructuredGridOn()\n\n"},
  {"HyperTreeGridToUnstructuredGridOff", PyvtkExtractSelection_HyperTreeGridToUnstructuredGridOff, METH_VARARGS,
   "HyperTreeGridToUnstructuredGridOff(self) -> None\nC++: virtual void HyperTreeGridToUnstructuredGridOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelection_Doc =
  "vtkExtractSelection - extract a subset from a vtkDataSet.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkExtractSelection extracts some subset of cells and points from its\n"
  "input dataobject. The dataobject is given on its first input port.\n"
  "The subset is described by the contents of the vtkSelection on its\n"
  "second input port.  Depending on the contents of the vtkSelection\n"
  "this will create various vtkSelectors to identify the selected\n"
  "elements.\n\n"
  "This filter supports vtkCompositeDataSet (output is\n"
  "vtkMultiBlockDataSet), vtkTable and vtkDataSet (output is\n"
  "vtkUnstructuredGrid). Other types of input are not processed and the\n"
  "corresponding output is a default constructed object of the input\n"
  "type.\n\n"
  "@sa\n"
  "vtkSelection vtkSelector vtkSelectionNode\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractSelection", // tp_name
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
  PyvtkExtractSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelection_StaticNew()
{
  return vtkExtractSelection::New();
}

PyObject *PyvtkExtractSelection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelection_Type, PyvtkExtractSelection_Methods,
    "vtkExtractSelection",
 &PyvtkExtractSelection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

