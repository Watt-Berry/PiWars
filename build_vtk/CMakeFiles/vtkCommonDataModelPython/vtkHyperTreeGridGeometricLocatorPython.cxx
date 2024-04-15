// python wrapper for vtkHyperTreeGridGeometricLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGeometricLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridGeometricLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridGeometricLocator_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridLocator_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridLocator_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridLocator_ClassNew
#endif

static PyObject *
PyvtkHyperTreeGridGeometricLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridGeometricLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGeometricLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridGeometricLocator *tempr = vtkHyperTreeGridGeometricLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridGeometricLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGeometricLocator::NewInstance());

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
PyvtkHyperTreeGridGeometricLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridGeometricLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridGeometricLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_SetHTG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHTG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->SetHTG(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGeometricLocator::SetHTG(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_Search_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Search");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = (ap.IsBound() ?
      op->Search(temp0) :
      op->vtkHyperTreeGridGeometricLocator::Search(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridGeometricLocator_Search_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Search");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkHyperTreeGridNonOrientedGeometryCursor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkHyperTreeGridNonOrientedGeometryCursor"))
  {
    long long tempr = (ap.IsBound() ?
      op->Search(temp0, temp1) :
      op->vtkHyperTreeGridGeometricLocator::Search(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridGeometricLocator_Search(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridGeometricLocator_Search_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridGeometricLocator_Search_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Search");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  int temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkHyperTreeGridGeometricLocator::FindCell(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometricLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  long long temp7;
  vtkGenericCell *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkHyperTreeGridGeometricLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
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
PyvtkHyperTreeGridGeometricLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometricLocator *op = static_cast<vtkHyperTreeGridGeometricLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  vtkGenericCell *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetVTKObject(temp5, "vtkGenericCell"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkHyperTreeGridGeometricLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridGeometricLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkHyperTreeGridGeometricLocator_IntersectWithLine_s1(self, args);
    case 6:
      return PyvtkHyperTreeGridGeometricLocator_IntersectWithLine_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}

static PyMethodDef PyvtkHyperTreeGridGeometricLocator_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridGeometricLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridGeometricLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridGeometricLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridGeometricLocator\nC++: static vtkHyperTreeGridGeometricLocator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridGeometricLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridGeometricLocator\nC++: vtkHyperTreeGridGeometricLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridGeometricLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridGeometricLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHTG", PyvtkHyperTreeGridGeometricLocator_SetHTG, METH_VARARGS,
   "SetHTG(self, candHTG:vtkHyperTreeGrid) -> None\nC++: void SetHTG(vtkHyperTreeGrid *candHTG) override;\n\nSet the vtkHyperTreeGrid to use for locating\n"},
  {"Search", PyvtkHyperTreeGridGeometricLocator_Search, METH_VARARGS,
   "Search(self, point:(float, float, float)) -> int\nC++: vtkIdType Search(const double point[3]) override;\nSearch(self, point:(float, float, float),\n    cursor:vtkHyperTreeGridNonOrientedGeometryCursor) -> int\nC++: vtkIdType Search(const double point[3],\n    vtkHyperTreeGridNonOrientedGeometryCursor *cursor)\n\nBasic search for cell holding a given point\n@param point coordinated of sought point\n@return the global index of the cell holding the point (-1 if\n    cell not found or masked)\n"},
  {"FindCell", PyvtkHyperTreeGridGeometricLocator_FindCell, METH_VARARGS,
   "FindCell(self, point:(float, float, float), tol:float,\n    cell:vtkGenericCell, subId:int, pcoords:[float, float, float],\n     weights:[float, ...]) -> int\nC++: vtkIdType FindCell(const double point[3], double tol,\n    vtkGenericCell *cell, int &subId, double pcoords[3],\n    double *weights) override;\n\nFind the cell where a given point lies\n@param[in] point an array holding the coordinates of the point to\nsearch for\n@param[in] tol tolerance level\n@param[out] cell pointer to a cell configured with information\n    from return value cell index\n@param[out] subId index of the sub cell if composite cell\n@param[out] pcoords parametric coordinates of the point in the\n    cell\n@param[out] weights interpolation weights of the sought point in\n    the cell\n@return the global index of the cell holding the point (-1 if no\n    cell is found or is masked)\n"},
  {"IntersectWithLine", PyvtkHyperTreeGridGeometricLocator_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p0:(float, float, float), p1:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int,\n    cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p0[3], const double p1[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nIntersectWithLine(self, p0:(float, float, float), p1:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList,\n     cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p0[3], const double p1[3],\n     double tol, vtkPoints *points, vtkIdList *cellIds,\n    vtkGenericCell *cell) override;\n\nFind first intersection of the line defined by (p0, p1) with the\nHTG\n@param[in] p0 first point of the line\n@param[in] p1 second point of the line\n@param[in] tol tolerance level\n@param[out] t pseudo-time along line path at intersection\n@param[out] x intersection point\n@param[out] pcoords parametric coordinatesof intersection\n@param[out] subId index of the sub cell if composite cell\n@param[out] cellId the global index of the intersected cell\n@param[out] cell pointer to a vtkCell object corresponding to\n    cellId\n@return an integer with 0 if no intersection could be found\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridGeometricLocator_Doc =
  "vtkHyperTreeGridGeometricLocator - class that implements accelerated\nsearches through HyperTree Grids (HTGs) using geometric information\n\n"
  "Superclass: vtkHyperTreeGridLocator\n\n"
  "The goal of this class is to implement a geometric locator search\n"
  "through the HTG structure. Its main feature should be to expose a\n"
  "generic interface to finding the HTG cells that contain a given\n"
  "geometric object. The search through the HTG is implemented using a\n"
  "vtkHyperTreeGridNonOrientedGeometricCursor. The arborescent structure\n"
  "of the HTG should be sufficient to accelerate the search and achieve\n"
  "good performance in general.\n\n"
  "All methods in this class should be thread safe since it is meant to\n"
  "be used in a multi-threaded environment out of the box (except SetHTG\n"
  "which should be called outside any multi-threaded setting).\n\n"
  "@sa\n"
  "vtkHyperTreeGridLocator, vtkHyperTreeGrid, vtkHyperTree,\n"
  "vtkHyperTreeGridOrientedCursor, vtkHyperTreeGridNonOrientedCursor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGeometricLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridGeometricLocator", // tp_name
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
  PyvtkHyperTreeGridGeometricLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridGeometricLocator_StaticNew()
{
  return vtkHyperTreeGridGeometricLocator::New();
}

PyObject *PyvtkHyperTreeGridGeometricLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridGeometricLocator_Type, PyvtkHyperTreeGridGeometricLocator_Methods,
    "vtkHyperTreeGridGeometricLocator",
 &PyvtkHyperTreeGridGeometricLocator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridGeometricLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridGeometricLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridGeometricLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

