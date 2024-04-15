// python wrapper for vtkGeoTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGeoTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeoTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkGeoTransform_ClassNew(); }


static PyObject *
PyvtkGeoTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeoTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeoTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeoTransform *tempr = vtkGeoTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeoTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeoTransform::NewInstance());

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
PyvtkGeoTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGeoTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGeoTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_SetSourceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoProjection"))
  {
    if (ap.IsBound())
    {
      op->SetSourceProjection(temp0);
    }
    else
    {
      op->vtkGeoTransform::SetSourceProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_GetSourceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeoProjection *tempr = (ap.IsBound() ?
      op->GetSourceProjection() :
      op->vtkGeoTransform::GetSourceProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_SetDestinationProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDestinationProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoProjection"))
  {
    if (ap.IsBound())
    {
      op->SetDestinationProjection(temp0);
    }
    else
    {
      op->vtkGeoTransform::SetDestinationProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_GetDestinationProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDestinationProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeoProjection *tempr = (ap.IsBound() ?
      op->GetDestinationProjection() :
      op->vtkGeoTransform::GetDestinationProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkGeoTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkGeoTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkGeoTransform::InternalTransformPoint(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_ComputeUTMZone_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeUTMZone");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = vtkGeoTransform::ComputeUTMZone(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeoTransform_ComputeUTMZone_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeUTMZone");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkGeoTransform::ComputeUTMZone(temp0);

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
PyvtkGeoTransform_ComputeUTMZone(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkGeoTransform_ComputeUTMZone_s1(self, args);
    case 1:
      return PyvtkGeoTransform_ComputeUTMZone_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeUTMZone");
  return nullptr;
}


static PyObject *
PyvtkGeoTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeoTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkGeoTransform::MakeTransform());

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

static PyMethodDef PyvtkGeoTransform_Methods[] = {
  {"IsTypeOf", PyvtkGeoTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeoTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeoTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGeoTransform\nC++: static vtkGeoTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeoTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGeoTransform\nC++: vtkGeoTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGeoTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGeoTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceProjection", PyvtkGeoTransform_SetSourceProjection, METH_VARARGS,
   "SetSourceProjection(self, source:vtkGeoProjection) -> None\nC++: void SetSourceProjection(vtkGeoProjection *source)\n\nThe source geographic projection.\n"},
  {"GetSourceProjection", PyvtkGeoTransform_GetSourceProjection, METH_VARARGS,
   "GetSourceProjection(self) -> vtkGeoProjection\nC++: virtual vtkGeoProjection *GetSourceProjection()\n\n"},
  {"SetDestinationProjection", PyvtkGeoTransform_SetDestinationProjection, METH_VARARGS,
   "SetDestinationProjection(self, dest:vtkGeoProjection) -> None\nC++: void SetDestinationProjection(vtkGeoProjection *dest)\n\nThe target geographic projection.\n"},
  {"GetDestinationProjection", PyvtkGeoTransform_GetDestinationProjection, METH_VARARGS,
   "GetDestinationProjection(self) -> vtkGeoProjection\nC++: virtual vtkGeoProjection *GetDestinationProjection()\n\n"},
  {"TransformPoints", PyvtkGeoTransform_TransformPoints, METH_VARARGS,
   "TransformPoints(self, src:vtkPoints, dst:vtkPoints) -> None\nC++: void TransformPoints(vtkPoints *src, vtkPoints *dst)\n    override;\n\nTransform many points at once.\n"},
  {"Inverse", PyvtkGeoTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.\n"},
  {"InternalTransformPoint", PyvtkGeoTransform_InternalTransformPoint, METH_VARARGS,
   "InternalTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\n"},
  {"ComputeUTMZone", PyvtkGeoTransform_ComputeUTMZone, METH_VARARGS,
   "ComputeUTMZone(lon:float, lat:float) -> int\nC++: static int ComputeUTMZone(double lon, double lat)\nComputeUTMZone(lonlat:[float, ...]) -> int\nC++: static int ComputeUTMZone(double *lonlat)\n\nComputes Universal Transverse Mercator (UTM) zone given the\nlongitude and latitude of the point. It correctly computes the\nzones in the two exception areas. It returns an integer between 1\nand 60 for valid long lat, or 0 otherwise.\n"},
  {"InternalTransformDerivative", PyvtkGeoTransform_InternalTransformDerivative, METH_VARARGS,
   "InternalTransformDerivative(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\n"},
  {"MakeTransform", PyvtkGeoTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGeoTransform_Doc =
  "vtkGeoTransform - A transformation between two geographic coordinate\nsystems\n\n"
  "Superclass: vtkAbstractTransform\n\n"
  "This class takes two geographic projections and transforms point\n"
  "coordinates between them.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeoTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkGeovisCore.vtkGeoTransform", // tp_name
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
  PyvtkGeoTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeoTransform_StaticNew()
{
  return vtkGeoTransform::New();
}

PyObject *PyvtkGeoTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGeoTransform_Type, PyvtkGeoTransform_Methods,
    "vtkGeoTransform",
 &PyvtkGeoTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractTransform");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeoTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeoTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeoTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

