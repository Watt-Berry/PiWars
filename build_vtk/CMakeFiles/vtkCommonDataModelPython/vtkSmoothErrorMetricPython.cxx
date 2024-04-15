// python wrapper for vtkSmoothErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmoothErrorMetric.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmoothErrorMetric(PyObject *dict); }
extern "C" { PyObject *PyvtkSmoothErrorMetric_ClassNew(); }

#ifndef DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
extern "C" { PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew(); }
#define DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
#endif

static PyObject *
PyvtkSmoothErrorMetric_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmoothErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmoothErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmoothErrorMetric *tempr = vtkSmoothErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmoothErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmoothErrorMetric::NewInstance());

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
PyvtkSmoothErrorMetric_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSmoothErrorMetric::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSmoothErrorMetric::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_GetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleTolerance() :
      op->vtkSmoothErrorMetric::GetAngleTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_SetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleTolerance(temp0);
    }
    else
    {
      op->vtkSmoothErrorMetric::SetAngleTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->RequiresEdgeSubdivision(temp0, temp1, temp2, temp3) :
      op->vtkSmoothErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->GetError(temp0, temp1, temp2, temp3) :
      op->vtkSmoothErrorMetric::GetError(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSmoothErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkSmoothErrorMetric_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSmoothErrorMetric_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSmoothErrorMetric_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSmoothErrorMetric\nC++: static vtkSmoothErrorMetric *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSmoothErrorMetric_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSmoothErrorMetric\nC++: vtkSmoothErrorMetric *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSmoothErrorMetric_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSmoothErrorMetric_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAngleTolerance", PyvtkSmoothErrorMetric_GetAngleTolerance, METH_VARARGS,
   "GetAngleTolerance(self) -> float\nC++: double GetAngleTolerance()\n\nReturn the flatness threshold.\n\\post positive_result: result>90 && result<180\n"},
  {"SetAngleTolerance", PyvtkSmoothErrorMetric_SetAngleTolerance, METH_VARARGS,
   "SetAngleTolerance(self, value:float) -> None\nC++: void SetAngleTolerance(double value)\n\nSet the flatness threshold with an angle in degrees. Internally\ncompute the cosine. value is supposed to be in ]90,180[, if not\nit is clamped in [90.1,179.9]. For instance 178 will give better\nresult than 150.\n"},
  {"RequiresEdgeSubdivision", PyvtkSmoothErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "RequiresEdgeSubdivision(self, leftPoint:[float, ...],\n    midPoint:[float, ...], rightPoint:[float, ...], alpha:float)\n    -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha) override;\n\nDoes the edge need to be subdivided according to the cosine\nbetween the two chords passing through the mid-point and the\nendpoints? The edge is defined by its `leftPoint' and its\n`rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be\ninitialized before calling RequiresEdgeSubdivision(). Their\nformat is global coordinates, parametric coordinates and point\ncentered attributes: xyx rst abc de... `alpha' is the normalized\nabscissa of the midpoint along the edge. (close to 0 means close\nto the left point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkSmoothErrorMetric_GetError, METH_VARARGS,
   "GetError(self, leftPoint:[float, ...], midPoint:[float, ...],\n    rightPoint:[float, ...], alpha:float) -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha) override;\n\nReturn the error at the mid-point. It will return an error\nrelative to the bounding box size if GetRelative() is true, a\nsquare absolute error otherwise. See RequiresEdgeSubdivision()\nfor a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSmoothErrorMetric_Doc =
  "vtkSmoothErrorMetric - Objects that compute geometry-based error\nduring cell tessellation according to some max angle.\n\n"
  "Superclass: vtkGenericSubdivisionErrorMetric\n\n"
  "It is a concrete error metric, based on a geometric criterium: a max\n"
  "angle between the chord passing through the midpoint and one of the\n"
  "endpoints and the other chord passing through the midpoint and the\n"
  "other endpoint of the edge. It is related to the flatness of an edge.\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSmoothErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSmoothErrorMetric", // tp_name
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
  PyvtkSmoothErrorMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmoothErrorMetric_StaticNew()
{
  return vtkSmoothErrorMetric::New();
}

PyObject *PyvtkSmoothErrorMetric_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSmoothErrorMetric_Type, PyvtkSmoothErrorMetric_Methods,
    "vtkSmoothErrorMetric",
 &PyvtkSmoothErrorMetric_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGenericSubdivisionErrorMetric_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmoothErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmoothErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmoothErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

