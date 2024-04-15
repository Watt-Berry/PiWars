// python wrapper for vtkClosestPointStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkClosestPointStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClosestPointStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkClosestPointStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkFindCellStrategy_ClassNew
extern "C" { PyObject *PyvtkFindCellStrategy_ClassNew(); }
#define DECLARED_PyvtkFindCellStrategy_ClassNew
#endif

static PyObject *
PyvtkClosestPointStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClosestPointStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClosestPointStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClosestPointStrategy *tempr = vtkClosestPointStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClosestPointStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClosestPointStrategy::NewInstance());

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
PyvtkClosestPointStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClosestPointStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClosestPointStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkClosestPointStrategy::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  long long temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp6, save6, size6);
    vtkPythonArgs::Save(temp7, save7, size7);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkClosestPointStrategy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkGenericCell *temp3 = nullptr;
  long long temp4;
  int temp5;
  double temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkClosestPointStrategy::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->InsideCellBounds(temp0, temp1) :
      op->vtkClosestPointStrategy::InsideCellBounds(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_SetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetPointLocator(temp0);
    }
    else
    {
      op->vtkClosestPointStrategy::SetPointLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_GetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetPointLocator() :
      op->vtkClosestPointStrategy::GetPointLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_SelectCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  vtkPointSet *temp0 = nullptr;
  long long temp1;
  vtkCell *temp2 = nullptr;
  vtkGenericCell *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCell") &&
      ap.GetVTKObject(temp3, "vtkGenericCell"))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->SelectCell(temp0, temp1, temp2, temp3) :
      op->vtkClosestPointStrategy::SelectCell(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestPointStrategy_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestPointStrategy *op = static_cast<vtkClosestPointStrategy *>(vp);

  vtkFindCellStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFindCellStrategy"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkClosestPointStrategy::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkClosestPointStrategy_Methods[] = {
  {"IsTypeOf", PyvtkClosestPointStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClosestPointStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClosestPointStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkClosestPointStrategy\nC++: static vtkClosestPointStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClosestPointStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkClosestPointStrategy\nC++: vtkClosestPointStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClosestPointStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClosestPointStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkClosestPointStrategy_Initialize, METH_VARARGS,
   "Initialize(self, ps:vtkPointSet) -> int\nC++: int Initialize(vtkPointSet *ps) override;\n\nProvide the necessary initialization method (see superclass for\nmore information). This method sets up the point locator,\nvtkPointSet relationship. It will use the vtkPointSet's default\nlocator if not defined by SetPointLocator() below.\n"},
  {"FindCell", PyvtkClosestPointStrategy_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], cell:vtkCell,\n    gencell:vtkGenericCell, cellId:int, tol2:float, subId:int,\n    pcoords:[float, float, float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nImplement the specific strategy. This method should only be\ncalled after the Initialize() method has been invoked.\n"},
  {"FindClosestPointWithinRadius", PyvtkClosestPointStrategy_FindClosestPointWithinRadius, METH_VARARGS,
   "FindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float,\n    inside:int) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n    override;\n\nImplement the specific strategy. This method should only be\ncalled after the Initialize() method has been invoked.\n"},
  {"InsideCellBounds", PyvtkClosestPointStrategy_InsideCellBounds, METH_VARARGS,
   "InsideCellBounds(self, x:[float, float, float], cellId:int)\n    -> bool\nC++: bool InsideCellBounds(double x[3], vtkIdType cellId)\n    override;\n\nImplement the specific strategy.\n"},
  {"SetPointLocator", PyvtkClosestPointStrategy_SetPointLocator, METH_VARARGS,
   "SetPointLocator(self, __a:vtkAbstractPointLocator) -> None\nC++: virtual void SetPointLocator(vtkAbstractPointLocator *)\n\nSet / get an instance of vtkAbstractPointLocator which is used to\nimplement the strategy for FindCell(). Note if a locator is not\nspecified, then the default locator instantiated by the\nvtkPointSet provided in the Initialize() method is used.\n"},
  {"GetPointLocator", PyvtkClosestPointStrategy_GetPointLocator, METH_VARARGS,
   "GetPointLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetPointLocator()\n\n"},
  {"SelectCell", PyvtkClosestPointStrategy_SelectCell, METH_VARARGS,
   "SelectCell(self, self_:vtkPointSet, cellId:int, cell:vtkCell,\n    gencell:vtkGenericCell) -> vtkCell\nC++: vtkCell *SelectCell(vtkPointSet *self, vtkIdType cellId,\n    vtkCell *cell, vtkGenericCell *gencell)\n\nSubclasses use this method to select the current cell.\n"},
  {"CopyParameters", PyvtkClosestPointStrategy_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkFindCellStrategy) -> None\nC++: void CopyParameters(vtkFindCellStrategy *from) override;\n\nCopy essential parameters between instances of this class. This\ngenerally is used to copy from instance prototype to another, or\nto copy strategies between thread instances.  Sub-classes can\ncontribute to the parameter copying process via chaining.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClosestPointStrategy_Doc =
  "vtkClosestPointStrategy - implement a specific\nvtkPointSet::FindCell() strategy based\n         on closest point\n\n"
  "Superclass: vtkFindCellStrategy\n\n"
  "vtkClosestPointStrategy is implements a FindCell() strategy based on\n"
  "locating the closest point in a dataset, and then searching the\n"
  "attached cells. While relatively fast, it does not always return the\n"
  "correct result (it may not find a cell, since the closest cell may\n"
  "not be connected to the closest point). vtkCellLocatorStrategy or\n"
  "vtkClosestNPointsStrategy will produce better results at the cost of\n"
  "speed.\n\n"
  "@sa\n"
  "vtkFindCellStrategy vtkPointSet vtkCellLocatorStrategy\n"
  "vtkClosestNPointsStrategy\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClosestPointStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkClosestPointStrategy", // tp_name
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
  PyvtkClosestPointStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClosestPointStrategy_StaticNew()
{
  return vtkClosestPointStrategy::New();
}

PyObject *PyvtkClosestPointStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClosestPointStrategy_Type, PyvtkClosestPointStrategy_Methods,
    "vtkClosestPointStrategy",
 &PyvtkClosestPointStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkFindCellStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClosestPointStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClosestPointStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClosestPointStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

