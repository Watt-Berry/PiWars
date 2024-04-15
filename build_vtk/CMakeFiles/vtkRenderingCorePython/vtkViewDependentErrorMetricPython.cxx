// python wrapper for vtkViewDependentErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkViewDependentErrorMetric.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewDependentErrorMetric(PyObject *dict); }
extern "C" { PyObject *PyvtkViewDependentErrorMetric_ClassNew(); }


static PyObject *
PyvtkViewDependentErrorMetric_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewDependentErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewDependentErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewDependentErrorMetric *tempr = vtkViewDependentErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewDependentErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewDependentErrorMetric::NewInstance());

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
PyvtkViewDependentErrorMetric_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkViewDependentErrorMetric::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkViewDependentErrorMetric::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkViewDependentErrorMetric::GetPixelTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelTolerance(temp0);
    }
    else
    {
      op->vtkViewDependentErrorMetric::SetPixelTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkViewDependentErrorMetric::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkViewDependentErrorMetric::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

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
      op->vtkViewDependentErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

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
PyvtkViewDependentErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

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
      op->vtkViewDependentErrorMetric::GetError(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkViewDependentErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkViewDependentErrorMetric_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewDependentErrorMetric_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewDependentErrorMetric_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkViewDependentErrorMetric\nC++: static vtkViewDependentErrorMetric *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewDependentErrorMetric_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkViewDependentErrorMetric\nC++: vtkViewDependentErrorMetric *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkViewDependentErrorMetric_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkViewDependentErrorMetric_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPixelTolerance", PyvtkViewDependentErrorMetric_GetPixelTolerance, METH_VARARGS,
   "GetPixelTolerance(self) -> float\nC++: virtual double GetPixelTolerance()\n\nReturn the squared screen-based geometric accuracy measured in\npixels. An accuracy less or equal to 0.25 (0.5^2) ensures that\nthe screen-space interpolation of a mid-point matches exactly\nwith the projection of the mid-point (a value less than 1 but\ngreater than 0.25 is not enough, because of 8-neighbors). Maybe\nit is useful for lower accuracy in case of anti-aliasing?\n\\post positive_result: result>0\n"},
  {"SetPixelTolerance", PyvtkViewDependentErrorMetric_SetPixelTolerance, METH_VARARGS,
   "SetPixelTolerance(self, value:float) -> None\nC++: void SetPixelTolerance(double value)\n\nSet the squared screen-based geometric accuracy measured in\npixels. Subdivision will be required if the square distance\nbetween the projection of the real point and the straight line\npassing through the projection of the vertices of the edge is\ngreater than `value'. For instance, 0.25 will give better result\nthan 1.\n\\pre positive_value: value>0\n"},
  {"GetViewport", PyvtkViewDependentErrorMetric_GetViewport, METH_VARARGS,
   "GetViewport(self) -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\nSet/Get the renderer with `renderer' on which the error metric is\nbased. The error metric use the active camera of the renderer.\n"},
  {"SetViewport", PyvtkViewDependentErrorMetric_SetViewport, METH_VARARGS,
   "SetViewport(self, viewport:vtkViewport) -> None\nC++: void SetViewport(vtkViewport *viewport)\n\n"},
  {"RequiresEdgeSubdivision", PyvtkViewDependentErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "RequiresEdgeSubdivision(self, leftPoint:[float, ...],\n    midPoint:[float, ...], rightPoint:[float, ...], alpha:float)\n    -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha) override;\n\nDoes the edge need to be subdivided according to the distance\nbetween the line passing through its endpoints in screen space\nand the projection of its mid point? The edge is defined by its\n`leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and\n`rightPoint' have to be initialized before calling\nRequiresEdgeSubdivision(). Their format is global coordinates,\nparametric coordinates and point centered attributes: xyx rst abc\nde... `alpha' is the normalized abscissa of the midpoint along\nthe edge. (close to 0 means close to the left point, close to 1\nmeans close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkViewDependentErrorMetric_GetError, METH_VARARGS,
   "GetError(self, leftPoint:[float, ...], midPoint:[float, ...],\n    rightPoint:[float, ...], alpha:float) -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha) override;\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkViewDependentErrorMetric_Doc =
  "vtkViewDependentErrorMetric - Objects that compute a screen-based\nerror during cell tessellation.\n\n"
  "Superclass: vtkGenericSubdivisionErrorMetric\n\n"
  "It is a concrete error metric, based on a geometric criterium in the\n"
  "screen space: the variation of the projected edge from a projected\n"
  "straight line\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkViewDependentErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkViewDependentErrorMetric", // tp_name
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
  PyvtkViewDependentErrorMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkViewDependentErrorMetric_StaticNew()
{
  return vtkViewDependentErrorMetric::New();
}

PyObject *PyvtkViewDependentErrorMetric_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkViewDependentErrorMetric_Type, PyvtkViewDependentErrorMetric_Methods,
    "vtkViewDependentErrorMetric",
 &PyvtkViewDependentErrorMetric_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGenericSubdivisionErrorMetric");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkViewDependentErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewDependentErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewDependentErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

