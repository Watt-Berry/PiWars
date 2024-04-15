// python wrapper for vtkCoincidentPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCoincidentPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoincidentPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkCoincidentPoints_ClassNew(); }


static PyObject *
PyvtkCoincidentPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoincidentPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoincidentPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoincidentPoints *tempr = vtkCoincidentPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoincidentPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoincidentPoints::NewInstance());

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
PyvtkCoincidentPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCoincidentPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCoincidentPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->AddPoint(temp0, temp1);
    }
    else
    {
      op->vtkCoincidentPoints::AddPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCoincidentPointIds(temp0) :
      op->vtkCoincidentPoints::GetCoincidentPointIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetNextCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetNextCoincidentPointIds() :
      op->vtkCoincidentPoints::GetNextCoincidentPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCoincidentPoints::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_RemoveNonCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNonCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveNonCoincidentPoints();
    }
    else
    {
      op->vtkCoincidentPoints::RemoveNonCoincidentPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkCoincidentPoints::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_SpiralPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SpiralPoints");

  long long temp0;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    vtkCoincidentPoints::SpiralPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCoincidentPoints_Methods[] = {
  {"IsTypeOf", PyvtkCoincidentPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoincidentPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoincidentPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCoincidentPoints\nC++: static vtkCoincidentPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoincidentPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCoincidentPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCoincidentPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddPoint", PyvtkCoincidentPoints_AddPoint, METH_VARARGS,
   "AddPoint(self, Id:int, point:(float, float, float)) -> None\nC++: void AddPoint(vtkIdType Id, const double point[3])\n\nAccumulates a set of Ids in a map where the point coordinate is\nthe key. All Ids in a given map entry are thus coincident.\n@param Id - a unique Id for the given point that will be stored\n    in an vtkIdList.\n@param[in] point - the point coordinate that we will store in the\nmap to test if any other\npoints are coincident with it.\n"},
  {"GetCoincidentPointIds", PyvtkCoincidentPoints_GetCoincidentPointIds, METH_VARARGS,
   "GetCoincidentPointIds(self, point:(float, float, float))\n    -> vtkIdList\nC++: vtkIdList *GetCoincidentPointIds(const double point[3])\n\nRetrieve the list of point Ids that are coincident with the given\npoint.\n@param[in] point - the coordinate of coincident points we want to\nretrieve.\n"},
  {"GetNextCoincidentPointIds", PyvtkCoincidentPoints_GetNextCoincidentPointIds, METH_VARARGS,
   "GetNextCoincidentPointIds(self) -> vtkIdList\nC++: vtkIdList *GetNextCoincidentPointIds()\n\nUsed to iterate the sets of coincident points within the map.\nInitTraversal must be called first or nullptr will always be\nreturned.\n"},
  {"InitTraversal", PyvtkCoincidentPoints_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\nInitialize iteration to the beginning of the coincident point\nmap.\n"},
  {"RemoveNonCoincidentPoints", PyvtkCoincidentPoints_RemoveNonCoincidentPoints, METH_VARARGS,
   "RemoveNonCoincidentPoints(self) -> None\nC++: void RemoveNonCoincidentPoints()\n\nIterate through all added points and remove any entries that have\nno coincident points (only a single point Id).\n"},
  {"Clear", PyvtkCoincidentPoints_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\nClear the maps for reuse. This should be called if the caller\nmight reuse this class (another executive pass for instance).\n"},
  {"SpiralPoints", PyvtkCoincidentPoints_SpiralPoints, METH_VARARGS,
   "SpiralPoints(num:int, offsets:vtkPoints) -> None\nC++: static void SpiralPoints(vtkIdType num, vtkPoints *offsets)\n\nCalculate num points, at a regular interval, along a parametric\nspiral. Note this spiral is only in two dimensions having a\nconstant z value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCoincidentPoints_Doc =
  "vtkCoincidentPoints - contains an octree of labels\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides a collection of points that is organized such\n"
  "that each coordinate is stored with a set of point id's of points\n"
  "that are all coincident.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoincidentPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCoincidentPoints", // tp_name
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
  PyvtkCoincidentPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoincidentPoints_StaticNew()
{
  return vtkCoincidentPoints::New();
}

PyObject *PyvtkCoincidentPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCoincidentPoints_Type, PyvtkCoincidentPoints_Methods,
    "vtkCoincidentPoints",
 &PyvtkCoincidentPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCoincidentPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoincidentPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoincidentPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

