// python wrapper for vtkImageTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkImageTransform_ClassNew(); }


static PyObject *
PyvtkImageTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTransform *op = static_cast<vtkImageTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageTransform *tempr = vtkImageTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTransform *op = static_cast<vtkImageTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageTransform::NewInstance());

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
PyvtkImageTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTransform *op = static_cast<vtkImageTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_TransformPointSet_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPointSet");

  vtkImageData *temp0 = nullptr;
  vtkPointSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
  {
    vtkImageTransform::TransformPointSet(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageTransform_TransformPointSet_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPointSet");

  vtkImageData *temp0 = nullptr;
  vtkPointSet *temp1 = nullptr;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPointSet") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkImageTransform::TransformPointSet(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageTransform_TransformPointSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageTransform_TransformPointSet_s1(self, args);
    case 4:
      return PyvtkImageTransform_TransformPointSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPointSet");
  return nullptr;
}


static PyObject *
PyvtkImageTransform_TranslatePoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TranslatePoints");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkImageTransform::TranslatePoints(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_TransformPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPoints");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    vtkImageTransform::TransformPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTransform_TransformNormals(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformNormals");

  vtkMatrix3x3 *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkImageTransform::TransformNormals(temp0, temp1, temp2);

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
PyvtkImageTransform_TransformVectors(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformVectors");

  vtkMatrix3x3 *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkImageTransform::TransformVectors(temp0, temp1, temp2);

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

static PyMethodDef PyvtkImageTransform_Methods[] = {
  {"IsTypeOf", PyvtkImageTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageTransform\nC++: static vtkImageTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageTransform\nC++: vtkImageTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TransformPointSet", PyvtkImageTransform_TransformPointSet, METH_VARARGS,
   "TransformPointSet(im:vtkImageData, ps:vtkPointSet) -> None\nC++: static void TransformPointSet(vtkImageData *im,\n    vtkPointSet *ps)\nTransformPointSet(im:vtkImageData, ps:vtkPointSet,\n    transNormals:bool, transVectors:bool) -> None\nC++: static void TransformPointSet(vtkImageData *im,\n    vtkPointSet *ps, bool transNormals, bool transVectors)\n\nGiven a vtkImageData (and hence its associated orientation\nmatrix), and an instance of vtkPointSet, transform its points, as\nwell as any normals and vectors, associated with the vtkPointSet.\nThis is a convenience function, internally it calls\nTranslatePoints(), TransformPoints(), TransformNormals(), and/or\nTransformVectors() as appropriate. Note that both the normals and\nvectors associated with the point and cell data are transformed\nunless the second signature is called, which controls whether to\ntransform normals and/or vectors.\n"},
  {"TranslatePoints", PyvtkImageTransform_TranslatePoints, METH_VARARGS,
   "TranslatePoints(t:[float, ...], da:vtkDataArray) -> None\nC++: static void TranslatePoints(double *t, vtkDataArray *da)\n\nGiven x-y-z points represented by a vtkDataArray, translate the\npoints using the image origin. This method is useful if there is\nno orientation or spacing to apply.\n"},
  {"TransformPoints", PyvtkImageTransform_TransformPoints, METH_VARARGS,
   "TransformPoints(m4:vtkMatrix4x4, da:vtkDataArray) -> None\nC++: static void TransformPoints(vtkMatrix4x4 *m4,\n    vtkDataArray *da)\n\nGiven x-y-z points represented by a vtkDataArray, transform the\npoints using the matrix provided.\n"},
  {"TransformNormals", PyvtkImageTransform_TransformNormals, METH_VARARGS,
   "TransformNormals(m3:vtkMatrix3x3, spacing:[float, float, float],\n    da:vtkDataArray) -> None\nC++: static void TransformNormals(vtkMatrix3x3 *m3,\n    double spacing[3], vtkDataArray *da)\n\nGiven three-component normals represented by a vtkDataArray,\ntransform the normals using the matrix provided.\n"},
  {"TransformVectors", PyvtkImageTransform_TransformVectors, METH_VARARGS,
   "TransformVectors(m3:vtkMatrix3x3, spacing:[float, float, float],\n    da:vtkDataArray) -> None\nC++: static void TransformVectors(vtkMatrix3x3 *m3,\n    double spacing[3], vtkDataArray *da)\n\nGiven three-component vectors represented by a vtkDataArray,\ntransform the vectors using the matrix provided.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageTransform_Doc =
  "vtkImageTransform - helper class to transform output of\nnon-axis-aligned images\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageTransform is a helper class to transform the output of image\n"
  "filters (i.e., filter that input vtkImageData) by applying the Index\n"
  "to Physical transformation from the input image, which can include\n"
  "origin, spacing, direction. The transformation process is threaded\n"
  "with vtkSMPTools for performance.\n\n"
  "Typically in application the single method TransformPointSet() is\n"
  "invoked to transform the output of an image algorithm (assuming that\n"
  "the image's direction/orientation matrix is non-identity). Note that\n"
  "vtkPointSets encompass vtkPolyData as well as vtkUnstructuredGrids.\n"
  "In the future other output types may be added. Note that specific\n"
  "methods for transforming points, normals, and vectors is also\n"
  "provided by this class in case additional output data arrays need to\n"
  "be transformed (since TransformPointSet() only processes data arrays\n"
  "labeled as points, normals, and vectors).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkImageTransform", // tp_name
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
  PyvtkImageTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageTransform_StaticNew()
{
  return vtkImageTransform::New();
}

PyObject *PyvtkImageTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageTransform_Type, PyvtkImageTransform_Methods,
    "vtkImageTransform",
 &PyvtkImageTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

