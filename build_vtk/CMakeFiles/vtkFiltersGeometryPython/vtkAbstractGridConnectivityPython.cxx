// python wrapper for vtkAbstractGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractGridConnectivity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractGridConnectivity(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractGridConnectivity_ClassNew(); }


static PyObject *
PyvtkAbstractGridConnectivity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractGridConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractGridConnectivity *tempr = vtkAbstractGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractGridConnectivity::NewInstance());

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
PyvtkAbstractGridConnectivity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractGridConnectivity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractGridConnectivity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGhostLayers(temp0);
    }
    else
    {
      op->vtkAbstractGridConnectivity::SetNumberOfGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkAbstractGridConnectivity::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_SetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNumberOfGrids(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGrids() :
      op->vtkAbstractGridConnectivity::GetNumberOfGrids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ComputeNeighbors();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    op->CreateGhostLayers(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedPointGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedPointGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostedPointGhostArray(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedPointGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedCellGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedCellGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostedCellGhostArray(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedCellGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedGridPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPointData *tempr = (ap.IsBound() ?
      op->GetGhostedGridPointData(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedGridPointData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedGridCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellData *tempr = (ap.IsBound() ?
      op->GetGhostedGridCellData(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedGridCellData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetGhostedPoints(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractGridConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkAbstractGridConnectivity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractGridConnectivity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractGridConnectivity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractGridConnectivity\nC++: static vtkAbstractGridConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractGridConnectivity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractGridConnectivity\nC++: vtkAbstractGridConnectivity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractGridConnectivity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractGridConnectivity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfGhostLayers", PyvtkAbstractGridConnectivity_SetNumberOfGhostLayers, METH_VARARGS,
   "SetNumberOfGhostLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfGhostLayers(unsigned int _arg)\n\nSet/Get the number of ghost layers\n"},
  {"GetNumberOfGhostLayers", PyvtkAbstractGridConnectivity_GetNumberOfGhostLayers, METH_VARARGS,
   "GetNumberOfGhostLayers(self) -> int\nC++: virtual unsigned int GetNumberOfGhostLayers()\n\n"},
  {"SetNumberOfGrids", PyvtkAbstractGridConnectivity_SetNumberOfGrids, METH_VARARGS,
   "SetNumberOfGrids(self, N:int) -> None\nC++: virtual void SetNumberOfGrids(unsigned int N)\n\nSets the total number of grids in the domain. Note: This method\nis implemented by concrete classes. NOTE: Concrete classes\nimplementing this pure virtual method must set the number of\ngrids and call AllocateUserRegisterDataStructures in addition to\ndefining any other additional functionality.\n"},
  {"GetNumberOfGrids", PyvtkAbstractGridConnectivity_GetNumberOfGrids, METH_VARARGS,
   "GetNumberOfGrids(self) -> int\nC++: unsigned int GetNumberOfGrids()\n\nReturns the total number of grids.\n"},
  {"ComputeNeighbors", PyvtkAbstractGridConnectivity_ComputeNeighbors, METH_VARARGS,
   "ComputeNeighbors(self) -> None\nC++: virtual void ComputeNeighbors()\n\nComputes the grid neighboring topology for the domain\n"},
  {"CreateGhostLayers", PyvtkAbstractGridConnectivity_CreateGhostLayers, METH_VARARGS,
   "CreateGhostLayers(self, N:int=1) -> None\nC++: virtual void CreateGhostLayers(int N=1)\n\nCreates N layers of ghost layers where N is the number of cells\nthat will be added to each grid. If no parameter is supplied, N\nhas a nominal value of 1, in which case 1 layer of cells would be\nadded. NOTE: This method is implemented by concrete\nimplementations\n"},
  {"GetGhostedPointGhostArray", PyvtkAbstractGridConnectivity_GetGhostedPointGhostArray, METH_VARARGS,
   "GetGhostedPointGhostArray(self, gridID:int)\n    -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostedPointGhostArray(int gridID)\n\nReturns the ghosted points ghost array for the grid associated\nwith the given grid ID. The return pointer is a shallow-copy of\nthe internal data-structure. The pointer may be nullptr iff there\nis no ghosted points ghost array for the requested grid.\n"},
  {"GetGhostedCellGhostArray", PyvtkAbstractGridConnectivity_GetGhostedCellGhostArray, METH_VARARGS,
   "GetGhostedCellGhostArray(self, gridID:int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostedCellGhostArray(int gridID)\n\nReturns the ghosted cells ghost array for the grid associated\nwith the given grid ID. The return pointer is a shallow-copy of\nthe internal data-structure. The pointer may be nullptr iff there\nis no ghosted cells ghost array for the requested grid.\n"},
  {"GetGhostedGridPointData", PyvtkAbstractGridConnectivity_GetGhostedGridPointData, METH_VARARGS,
   "GetGhostedGridPointData(self, gridID:int) -> vtkPointData\nC++: vtkPointData *GetGhostedGridPointData(int gridID)\n\nReturns the ghosted grid point data for the grid associated with\nthe given grid ID. The return pointer is a shallow-copy of the\ninternal data-structure. The pointer may be nullptr iff there is\nno ghosted point data for the requested grid.\n"},
  {"GetGhostedGridCellData", PyvtkAbstractGridConnectivity_GetGhostedGridCellData, METH_VARARGS,
   "GetGhostedGridCellData(self, gridID:int) -> vtkCellData\nC++: vtkCellData *GetGhostedGridCellData(int gridID)\n\nReturns the ghosted grid cell data for the grid associated with\nthe given grid ID. The return pointer is a shallow-copy of the\ninternal data-structure. The pointer may be nullptr iff there is\nno ghosted cell data for the requested grid.\n"},
  {"GetGhostedPoints", PyvtkAbstractGridConnectivity_GetGhostedPoints, METH_VARARGS,
   "GetGhostedPoints(self, gridID:int) -> vtkPoints\nC++: vtkPoints *GetGhostedPoints(int gridID)\n\nReturns the ghosted grid points for the grid associated with the\ngiven grid ID. The return pointer is a shallow-copy of the\ninternal data structure. The pointer may be nullptr iff there are\nno ghosted points created for the requested grid.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractGridConnectivity_Doc =
  "vtkAbstractGridConnectivity -  A superclass that defines the\ninterface to be implemented by all\n concrete grid connectivity classes.\n\n"
  "Superclass: vtkObject\n\n"
  "Grid connectivity classes provide the\n"
  " mechanism to achieve the following:\n"
  " \n"
  "   \n"
  "     Handling of partitioned/distributed data\n\n\n"
  "      Construct the neighboring topology information for each\n"
  "partition,e.g.,\n"
  "      used for creating communication lists and in computing\n"
  "statistics,i.e.,\n"
  "      average, mean, etc.\n"
  "     \n"
  "     Creation of ghost layers\n\n\n"
  "      Provides the mechanism for automatically generating ghost\n"
  "information\n"
  "      given a partitioned/distributed grid configuration.\n"
  "     \n"
  "   \n"
  " \n\n"
  "@sa\n"
  " vtkStructuredGridConnectivity vtkStructuredAMRGridConnectivity\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractGridConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkAbstractGridConnectivity", // tp_name
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
  PyvtkAbstractGridConnectivity_Doc, // tp_doc
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

PyObject *PyvtkAbstractGridConnectivity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractGridConnectivity_Type, PyvtkAbstractGridConnectivity_Methods,
    "vtkAbstractGridConnectivity",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractGridConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractGridConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractGridConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

