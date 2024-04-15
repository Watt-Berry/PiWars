// python wrapper for vtkBoundaryMeshQuality
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoundaryMeshQuality.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundaryMeshQuality(PyObject *dict); }
extern "C" { PyObject *PyvtkBoundaryMeshQuality_ClassNew(); }


static PyObject *
PyvtkBoundaryMeshQuality_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundaryMeshQuality::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundaryMeshQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundaryMeshQuality *tempr = vtkBoundaryMeshQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundaryMeshQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundaryMeshQuality::NewInstance());

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
PyvtkBoundaryMeshQuality_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoundaryMeshQuality::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoundaryMeshQuality::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_SetDistanceFromCellCenterToFaceCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFromCellCenterToFaceCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceFromCellCenterToFaceCenter(temp0);
    }
    else
    {
      op->vtkBoundaryMeshQuality::SetDistanceFromCellCenterToFaceCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_GetDistanceFromCellCenterToFaceCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFromCellCenterToFaceCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDistanceFromCellCenterToFaceCenter() :
      op->vtkBoundaryMeshQuality::GetDistanceFromCellCenterToFaceCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFaceCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceFromCellCenterToFaceCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceFromCellCenterToFaceCenterOn();
    }
    else
    {
      op->vtkBoundaryMeshQuality::DistanceFromCellCenterToFaceCenterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFaceCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceFromCellCenterToFaceCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceFromCellCenterToFaceCenterOff();
    }
    else
    {
      op->vtkBoundaryMeshQuality::DistanceFromCellCenterToFaceCenterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_SetDistanceFromCellCenterToFacePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFromCellCenterToFacePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceFromCellCenterToFacePlane(temp0);
    }
    else
    {
      op->vtkBoundaryMeshQuality::SetDistanceFromCellCenterToFacePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_GetDistanceFromCellCenterToFacePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFromCellCenterToFacePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDistanceFromCellCenterToFacePlane() :
      op->vtkBoundaryMeshQuality::GetDistanceFromCellCenterToFacePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFacePlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceFromCellCenterToFacePlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceFromCellCenterToFacePlaneOn();
    }
    else
    {
      op->vtkBoundaryMeshQuality::DistanceFromCellCenterToFacePlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFacePlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceFromCellCenterToFacePlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceFromCellCenterToFacePlaneOff();
    }
    else
    {
      op->vtkBoundaryMeshQuality::DistanceFromCellCenterToFacePlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_SetAngleFaceNormalAndCellCenterToFaceCenterVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleFaceNormalAndCellCenterToFaceCenterVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleFaceNormalAndCellCenterToFaceCenterVector(temp0);
    }
    else
    {
      op->vtkBoundaryMeshQuality::SetAngleFaceNormalAndCellCenterToFaceCenterVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_GetAngleFaceNormalAndCellCenterToFaceCenterVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleFaceNormalAndCellCenterToFaceCenterVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAngleFaceNormalAndCellCenterToFaceCenterVector() :
      op->vtkBoundaryMeshQuality::GetAngleFaceNormalAndCellCenterToFaceCenterVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_AngleFaceNormalAndCellCenterToFaceCenterVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AngleFaceNormalAndCellCenterToFaceCenterVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AngleFaceNormalAndCellCenterToFaceCenterVectorOn();
    }
    else
    {
      op->vtkBoundaryMeshQuality::AngleFaceNormalAndCellCenterToFaceCenterVectorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundaryMeshQuality_AngleFaceNormalAndCellCenterToFaceCenterVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AngleFaceNormalAndCellCenterToFaceCenterVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundaryMeshQuality *op = static_cast<vtkBoundaryMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AngleFaceNormalAndCellCenterToFaceCenterVectorOff();
    }
    else
    {
      op->vtkBoundaryMeshQuality::AngleFaceNormalAndCellCenterToFaceCenterVectorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundaryMeshQuality_Methods[] = {
  {"IsTypeOf", PyvtkBoundaryMeshQuality_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundaryMeshQuality_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundaryMeshQuality_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoundaryMeshQuality\nC++: static vtkBoundaryMeshQuality *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundaryMeshQuality_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoundaryMeshQuality\nC++: vtkBoundaryMeshQuality *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoundaryMeshQuality_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoundaryMeshQuality_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDistanceFromCellCenterToFaceCenter", PyvtkBoundaryMeshQuality_SetDistanceFromCellCenterToFaceCenter, METH_VARARGS,
   "SetDistanceFromCellCenterToFaceCenter(self, _arg:bool) -> None\nC++: virtual void SetDistanceFromCellCenterToFaceCenter(bool _arg)\n\nSpecify whether to compute the distance from the cell center ot\nthe face center.\n"},
  {"GetDistanceFromCellCenterToFaceCenter", PyvtkBoundaryMeshQuality_GetDistanceFromCellCenterToFaceCenter, METH_VARARGS,
   "GetDistanceFromCellCenterToFaceCenter(self) -> bool\nC++: virtual bool GetDistanceFromCellCenterToFaceCenter()\n\n"},
  {"DistanceFromCellCenterToFaceCenterOn", PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFaceCenterOn, METH_VARARGS,
   "DistanceFromCellCenterToFaceCenterOn(self) -> None\nC++: virtual void DistanceFromCellCenterToFaceCenterOn()\n\n"},
  {"DistanceFromCellCenterToFaceCenterOff", PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFaceCenterOff, METH_VARARGS,
   "DistanceFromCellCenterToFaceCenterOff(self) -> None\nC++: virtual void DistanceFromCellCenterToFaceCenterOff()\n\n"},
  {"SetDistanceFromCellCenterToFacePlane", PyvtkBoundaryMeshQuality_SetDistanceFromCellCenterToFacePlane, METH_VARARGS,
   "SetDistanceFromCellCenterToFacePlane(self, _arg:bool) -> None\nC++: virtual void SetDistanceFromCellCenterToFacePlane(bool _arg)\n\nSpecify whether to compute the distance from the cell center to\nthe face's plane.\n"},
  {"GetDistanceFromCellCenterToFacePlane", PyvtkBoundaryMeshQuality_GetDistanceFromCellCenterToFacePlane, METH_VARARGS,
   "GetDistanceFromCellCenterToFacePlane(self) -> bool\nC++: virtual bool GetDistanceFromCellCenterToFacePlane()\n\n"},
  {"DistanceFromCellCenterToFacePlaneOn", PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFacePlaneOn, METH_VARARGS,
   "DistanceFromCellCenterToFacePlaneOn(self) -> None\nC++: virtual void DistanceFromCellCenterToFacePlaneOn()\n\n"},
  {"DistanceFromCellCenterToFacePlaneOff", PyvtkBoundaryMeshQuality_DistanceFromCellCenterToFacePlaneOff, METH_VARARGS,
   "DistanceFromCellCenterToFacePlaneOff(self) -> None\nC++: virtual void DistanceFromCellCenterToFacePlaneOff()\n\n"},
  {"SetAngleFaceNormalAndCellCenterToFaceCenterVector", PyvtkBoundaryMeshQuality_SetAngleFaceNormalAndCellCenterToFaceCenterVector, METH_VARARGS,
   "SetAngleFaceNormalAndCellCenterToFaceCenterVector(self, _arg:bool)\n     -> None\nC++: virtual void SetAngleFaceNormalAndCellCenterToFaceCenterVector(\n    bool _arg)\n\nSpecify whether to compute the angle between the face normal and\ncell center to face center vector. The angle is in degrees.\n"},
  {"GetAngleFaceNormalAndCellCenterToFaceCenterVector", PyvtkBoundaryMeshQuality_GetAngleFaceNormalAndCellCenterToFaceCenterVector, METH_VARARGS,
   "GetAngleFaceNormalAndCellCenterToFaceCenterVector(self) -> bool\nC++: virtual bool GetAngleFaceNormalAndCellCenterToFaceCenterVector(\n    )\n\n"},
  {"AngleFaceNormalAndCellCenterToFaceCenterVectorOn", PyvtkBoundaryMeshQuality_AngleFaceNormalAndCellCenterToFaceCenterVectorOn, METH_VARARGS,
   "AngleFaceNormalAndCellCenterToFaceCenterVectorOn(self) -> None\nC++: virtual void AngleFaceNormalAndCellCenterToFaceCenterVectorOn(\n    )\n\n"},
  {"AngleFaceNormalAndCellCenterToFaceCenterVectorOff", PyvtkBoundaryMeshQuality_AngleFaceNormalAndCellCenterToFaceCenterVectorOff, METH_VARARGS,
   "AngleFaceNormalAndCellCenterToFaceCenterVectorOff(self) -> None\nC++: virtual void AngleFaceNormalAndCellCenterToFaceCenterVectorOff(\n    )\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBoundaryMeshQuality_Doc =
  "vtkBoundaryMeshQuality - Computes metrics on the boundary faces of a\nmesh.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBoundaryMeshQuality computes metrics on the boundary faces of a\n"
  "volumetric mesh. The metrics that can be computed on the boundary\n"
  "faces of the mesh and are:\n"
  "- Distance from cell center to face center\n"
  "- Distance from cell center to face's plane\n"
  "- Angle of face's plane normal and cell center to face center vector\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoundaryMeshQuality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkBoundaryMeshQuality", // tp_name
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
  PyvtkBoundaryMeshQuality_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundaryMeshQuality_StaticNew()
{
  return vtkBoundaryMeshQuality::New();
}

PyObject *PyvtkBoundaryMeshQuality_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoundaryMeshQuality_Type, PyvtkBoundaryMeshQuality_Methods,
    "vtkBoundaryMeshQuality",
 &PyvtkBoundaryMeshQuality_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundaryMeshQuality(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundaryMeshQuality_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundaryMeshQuality", o) != 0)
  {
    Py_DECREF(o);
  }

}

