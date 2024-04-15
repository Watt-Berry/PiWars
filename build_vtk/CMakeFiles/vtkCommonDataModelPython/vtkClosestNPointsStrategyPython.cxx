// python wrapper for vtkClosestNPointsStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkClosestNPointsStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClosestNPointsStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkClosestNPointsStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkClosestPointStrategy_ClassNew
extern "C" { PyObject *PyvtkClosestPointStrategy_ClassNew(); }
#define DECLARED_PyvtkClosestPointStrategy_ClassNew
#endif

static PyObject *
PyvtkClosestNPointsStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClosestNPointsStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClosestNPointsStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClosestNPointsStrategy *tempr = vtkClosestNPointsStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClosestNPointsStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClosestNPointsStrategy::NewInstance());

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
PyvtkClosestNPointsStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClosestNPointsStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClosestNPointsStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

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
      op->vtkClosestNPointsStrategy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkClosestNPointsStrategy_SetClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosestNPoints(temp0);
    }
    else
    {
      op->vtkClosestNPointsStrategy::SetClosestNPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_GetClosestNPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestNPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosestNPointsMinValue() :
      op->vtkClosestNPointsStrategy::GetClosestNPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_GetClosestNPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestNPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosestNPointsMaxValue() :
      op->vtkClosestNPointsStrategy::GetClosestNPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_GetClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosestNPoints() :
      op->vtkClosestNPointsStrategy::GetClosestNPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

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
      op->vtkClosestNPointsStrategy::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosestNPointsStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosestNPointsStrategy *op = static_cast<vtkClosestNPointsStrategy *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkClosestNPointsStrategy::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClosestNPointsStrategy_Methods[] = {
  {"IsTypeOf", PyvtkClosestNPointsStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClosestNPointsStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClosestNPointsStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkClosestNPointsStrategy\nC++: static vtkClosestNPointsStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClosestNPointsStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkClosestNPointsStrategy\nC++: vtkClosestNPointsStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClosestNPointsStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClosestNPointsStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FindCell", PyvtkClosestNPointsStrategy_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], cell:vtkCell,\n    gencell:vtkGenericCell, cellId:int, tol2:float, subId:int,\n    pcoords:[float, float, float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nImplement the specific strategy.\n"},
  {"SetClosestNPoints", PyvtkClosestNPointsStrategy_SetClosestNPoints, METH_VARARGS,
   "SetClosestNPoints(self, _arg:int) -> None\nC++: virtual void SetClosestNPoints(int _arg)\n\nSet / get the value for the N closest points.\n"},
  {"GetClosestNPointsMinValue", PyvtkClosestNPointsStrategy_GetClosestNPointsMinValue, METH_VARARGS,
   "GetClosestNPointsMinValue(self) -> int\nC++: virtual int GetClosestNPointsMinValue()\n\n"},
  {"GetClosestNPointsMaxValue", PyvtkClosestNPointsStrategy_GetClosestNPointsMaxValue, METH_VARARGS,
   "GetClosestNPointsMaxValue(self) -> int\nC++: virtual int GetClosestNPointsMaxValue()\n\n"},
  {"GetClosestNPoints", PyvtkClosestNPointsStrategy_GetClosestNPoints, METH_VARARGS,
   "GetClosestNPoints(self) -> int\nC++: virtual int GetClosestNPoints()\n\n"},
  {"CopyParameters", PyvtkClosestNPointsStrategy_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkFindCellStrategy) -> None\nC++: void CopyParameters(vtkFindCellStrategy *from) override;\n\nCopy essential parameters between instances of this class. This\ngenerally is used to copy from instance prototype to another, or\nto copy strategies between thread instances.  Sub-classes can\ncontribute to the parameter copying process via chaining.\n"},
  {"Initialize", PyvtkClosestNPointsStrategy_Initialize, METH_VARARGS,
   "Initialize(self, ps:vtkPointSet) -> int\nC++: int Initialize(vtkPointSet *ps) override;\n\nProvide the necessary initialization method (see superclass for\nmore information). This method sets up the point locator,\nvtkPointSet relationship. It will use the vtkPointSet's default\nlocator if not defined by SetPointLocator() below.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClosestNPointsStrategy_Doc =
  "vtkClosestNPointsStrategy - implement a specific\nvtkPointSet::FindCell() strategy based\n         on the N closest points\n\n"
  "Superclass: vtkClosestPointStrategy\n\n"
  "vtkClosestNPointsStrategy is implements a FindCell() strategy based\n"
  "on locating the closest N points in a dataset, and then searching\n"
  "attached cells. This class extends its superclass\n"
  "vtkClosestPointStrategy by looking at the additional N points.\n\n"
  "@sa\n"
  "vtkFindCellStrategy vtkPointSet\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClosestNPointsStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkClosestNPointsStrategy", // tp_name
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
  PyvtkClosestNPointsStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClosestNPointsStrategy_StaticNew()
{
  return vtkClosestNPointsStrategy::New();
}

PyObject *PyvtkClosestNPointsStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClosestNPointsStrategy_Type, PyvtkClosestNPointsStrategy_Methods,
    "vtkClosestNPointsStrategy",
 &PyvtkClosestNPointsStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkClosestPointStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClosestNPointsStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClosestNPointsStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClosestNPointsStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

