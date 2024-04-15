// python wrapper for vtkLandmarkTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLandmarkTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLandmarkTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkLandmarkTransform_ClassNew(); }

#ifndef DECLARED_PyvtkLinearTransform_ClassNew
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }
#define DECLARED_PyvtkLinearTransform_ClassNew
#endif

static PyObject *
PyvtkLandmarkTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLandmarkTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLandmarkTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLandmarkTransform *tempr = vtkLandmarkTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLandmarkTransform::NewInstance());

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
PyvtkLandmarkTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLandmarkTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLandmarkTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetSourceLandmarks(temp0);
    }
    else
    {
      op->vtkLandmarkTransform::SetSourceLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetTargetLandmarks(temp0);
    }
    else
    {
      op->vtkLandmarkTransform::SetTargetLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSourceLandmarks() :
      op->vtkLandmarkTransform::GetSourceLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetTargetLandmarks() :
      op->vtkLandmarkTransform::GetTargetLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkLandmarkTransform::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToRigidBody(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRigidBody");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToRigidBody();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToRigidBody();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToSimilarity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSimilarity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToSimilarity();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToSimilarity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToAffine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToAffine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToAffine();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToAffine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkLandmarkTransform::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModeAsString() :
      op->vtkLandmarkTransform::GetModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkLandmarkTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLandmarkTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkLandmarkTransform::MakeTransform());

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

static PyMethodDef PyvtkLandmarkTransform_Methods[] = {
  {"IsTypeOf", PyvtkLandmarkTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLandmarkTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLandmarkTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLandmarkTransform\nC++: static vtkLandmarkTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLandmarkTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLandmarkTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLandmarkTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceLandmarks", PyvtkLandmarkTransform_SetSourceLandmarks, METH_VARARGS,
   "SetSourceLandmarks(self, source:vtkPoints) -> None\nC++: void SetSourceLandmarks(vtkPoints *source)\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {"SetTargetLandmarks", PyvtkLandmarkTransform_SetTargetLandmarks, METH_VARARGS,
   "SetTargetLandmarks(self, target:vtkPoints) -> None\nC++: void SetTargetLandmarks(vtkPoints *target)\n\n"},
  {"GetSourceLandmarks", PyvtkLandmarkTransform_GetSourceLandmarks, METH_VARARGS,
   "GetSourceLandmarks(self) -> vtkPoints\nC++: virtual vtkPoints *GetSourceLandmarks()\n\n"},
  {"GetTargetLandmarks", PyvtkLandmarkTransform_GetTargetLandmarks, METH_VARARGS,
   "GetTargetLandmarks(self) -> vtkPoints\nC++: virtual vtkPoints *GetTargetLandmarks()\n\n"},
  {"SetMode", PyvtkLandmarkTransform_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand isotropic scaling. Affine (VTK_LANDMARK_AFFINE): collinearity\nis preserved. Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {"SetModeToRigidBody", PyvtkLandmarkTransform_SetModeToRigidBody, METH_VARARGS,
   "SetModeToRigidBody(self) -> None\nC++: void SetModeToRigidBody()\n\n"},
  {"SetModeToSimilarity", PyvtkLandmarkTransform_SetModeToSimilarity, METH_VARARGS,
   "SetModeToSimilarity(self) -> None\nC++: void SetModeToSimilarity()\n\n"},
  {"SetModeToAffine", PyvtkLandmarkTransform_SetModeToAffine, METH_VARARGS,
   "SetModeToAffine(self) -> None\nC++: void SetModeToAffine()\n\n"},
  {"GetMode", PyvtkLandmarkTransform_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\nGet the current transformation mode.\n"},
  {"GetModeAsString", PyvtkLandmarkTransform_GetModeAsString, METH_VARARGS,
   "GetModeAsString(self) -> str\nC++: const char *GetModeAsString()\n\n"},
  {"Inverse", PyvtkLandmarkTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.  This is done by switching the source\nand target landmarks.\n"},
  {"GetMTime", PyvtkLandmarkTransform_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {"MakeTransform", PyvtkLandmarkTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLandmarkTransform_Doc =
  "vtkLandmarkTransform - a linear transform specified by two\ncorresponding point sets\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "A vtkLandmarkTransform is defined by two sets of landmarks, the\n"
  "transform computed gives the best fit mapping one onto the other, in\n"
  "a least squares sense. The indices are taken to correspond, so point\n"
  "1 in the first set will get mapped close to point 1 in the second\n"
  "set, etc. Call SetSourceLandmarks and SetTargetLandmarks to specify\n"
  "the two sets of landmarks, ensure they have the same number of\n"
  "points.\n"
  "@warning\n"
  "Whenever you add, subtract, or set points you must call Modified() on\n"
  "the vtkPoints object, or the transformation might not update.\n"
  "@sa\n"
  "vtkLinearTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLandmarkTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkLandmarkTransform", // tp_name
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
  PyvtkLandmarkTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLandmarkTransform_StaticNew()
{
  return vtkLandmarkTransform::New();
}

PyObject *PyvtkLandmarkTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLandmarkTransform_Type, PyvtkLandmarkTransform_Methods,
    "vtkLandmarkTransform",
 &PyvtkLandmarkTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLinearTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLandmarkTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLandmarkTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLandmarkTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_LANDMARK_RIGIDBODY", 6 },
        { "VTK_LANDMARK_SIMILARITY", 7 },
        { "VTK_LANDMARK_AFFINE", 12 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

