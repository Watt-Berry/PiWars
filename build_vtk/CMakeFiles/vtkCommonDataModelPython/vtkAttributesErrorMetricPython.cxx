// python wrapper for vtkAttributesErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAttributesErrorMetric.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributesErrorMetric(PyObject *dict); }
extern "C" { PyObject *PyvtkAttributesErrorMetric_ClassNew(); }

#ifndef DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
extern "C" { PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew(); }
#define DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
#endif

static PyObject *
PyvtkAttributesErrorMetric_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributesErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributesErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributesErrorMetric *tempr = vtkAttributesErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributesErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributesErrorMetric::NewInstance());

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
PyvtkAttributesErrorMetric_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAttributesErrorMetric::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAttributesErrorMetric::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteAttributeTolerance() :
      op->vtkAttributesErrorMetric::GetAbsoluteAttributeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteAttributeTolerance(temp0);
    }
    else
    {
      op->vtkAttributesErrorMetric::SetAbsoluteAttributeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAttributeTolerance() :
      op->vtkAttributesErrorMetric::GetAttributeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTolerance(temp0);
    }
    else
    {
      op->vtkAttributesErrorMetric::SetAttributeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      op->vtkAttributesErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

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
PyvtkAttributesErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      op->vtkAttributesErrorMetric::GetError(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkAttributesErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkAttributesErrorMetric_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributesErrorMetric_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributesErrorMetric_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAttributesErrorMetric\nC++: static vtkAttributesErrorMetric *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributesErrorMetric_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAttributesErrorMetric\nC++: vtkAttributesErrorMetric *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAttributesErrorMetric_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAttributesErrorMetric_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance, METH_VARARGS,
   "GetAbsoluteAttributeTolerance(self) -> float\nC++: virtual double GetAbsoluteAttributeTolerance()\n\nAbsolute tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AbsoluteAttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {"SetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance, METH_VARARGS,
   "SetAbsoluteAttributeTolerance(self, value:float) -> None\nC++: void SetAbsoluteAttributeTolerance(double value)\n\nSet the absolute attribute accuracy to `value'. See\nGetAbsoluteAttributeTolerance() for details. It is particularly\nuseful when some concrete implementation of vtkGenericAttribute\ndoes not support GetRange() request, called internally in\nSetAttributeTolerance(). It may happen when the implementation\nsupport higher order attributes but cannot compute the range.\n\\pre valid_range_value: value>0\n"},
  {"GetAttributeTolerance", PyvtkAttributesErrorMetric_GetAttributeTolerance, METH_VARARGS,
   "GetAttributeTolerance(self) -> float\nC++: virtual double GetAttributeTolerance()\n\nRelative tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {"SetAttributeTolerance", PyvtkAttributesErrorMetric_SetAttributeTolerance, METH_VARARGS,
   "SetAttributeTolerance(self, value:float) -> None\nC++: void SetAttributeTolerance(double value)\n\nSet the relative attribute accuracy to `value'. See\nGetAttributeTolerance() for details.\n\\pre valid_range_value: value>0 && value<1\n"},
  {"RequiresEdgeSubdivision", PyvtkAttributesErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "RequiresEdgeSubdivision(self, leftPoint:[float, ...],\n    midPoint:[float, ...], rightPoint:[float, ...], alpha:float)\n    -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha) override;\n\nDoes the edge need to be subdivided according to the distance\nbetween the value of the active attribute/component at the\nmidpoint and the mean value between the endpoints? The edge is\ndefined by its `leftPoint' and its `rightPoint'. `leftPoint',\n`midPoint' and `rightPoint' have to be initialized before calling\nRequiresEdgeSubdivision(). Their format is global coordinates,\nparametric coordinates and point centered attributes: xyx rst abc\nde... `alpha' is the normalized abscissa of the midpoint along\nthe edge. (close to 0 means close to the left point, close to 1\nmeans close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkAttributesErrorMetric_GetError, METH_VARARGS,
   "GetError(self, leftPoint:[float, ...], midPoint:[float, ...],\n    rightPoint:[float, ...], alpha:float) -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha) override;\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAttributesErrorMetric_Doc =
  "vtkAttributesErrorMetric - Objects that compute attribute-based error\nduring cell tessellation.\n\n"
  "Superclass: vtkGenericSubdivisionErrorMetric\n\n"
  "It is a concrete error metric, based on an attribute criterium: the\n"
  "variation of the active attribute/component value from a linear ramp\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributesErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAttributesErrorMetric", // tp_name
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
  PyvtkAttributesErrorMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributesErrorMetric_StaticNew()
{
  return vtkAttributesErrorMetric::New();
}

PyObject *PyvtkAttributesErrorMetric_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAttributesErrorMetric_Type, PyvtkAttributesErrorMetric_Methods,
    "vtkAttributesErrorMetric",
 &PyvtkAttributesErrorMetric_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGenericSubdivisionErrorMetric_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributesErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributesErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributesErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

