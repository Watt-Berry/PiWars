// python wrapper for vtkImageEuclideanDistance
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageEuclideanDistance.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageEuclideanDistance(PyObject *dict); }
extern "C" { PyObject *PyvtkImageEuclideanDistance_ClassNew(); }


static PyObject *
PyvtkImageEuclideanDistance_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageEuclideanDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageEuclideanDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageEuclideanDistance *tempr = vtkImageEuclideanDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageEuclideanDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageEuclideanDistance::NewInstance());

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
PyvtkImageEuclideanDistance_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageEuclideanDistance::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageEuclideanDistance::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialize(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetInitialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialize() :
      op->vtkImageEuclideanDistance::GetInitialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeOn();
    }
    else
    {
      op->vtkImageEuclideanDistance::InitializeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeOff();
    }
    else
    {
      op->vtkImageEuclideanDistance::InitializeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConsiderAnisotropy(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetConsiderAnisotropy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsiderAnisotropy() :
      op->vtkImageEuclideanDistance::GetConsiderAnisotropy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsiderAnisotropyOn();
    }
    else
    {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsiderAnisotropyOff();
    }
    else
    {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkImageEuclideanDistance::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithm(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlgorithm() :
      op->vtkImageEuclideanDistance::GetAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaito(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaito");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithmToSaito();
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaito();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaitoCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithmToSaitoCached();
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaitoCached();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageEuclideanDistance_Methods[] = {
  {"IsTypeOf", PyvtkImageEuclideanDistance_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageEuclideanDistance_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageEuclideanDistance_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageEuclideanDistance\nC++: static vtkImageEuclideanDistance *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageEuclideanDistance_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageEuclideanDistance\nC++: vtkImageEuclideanDistance *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageEuclideanDistance_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageEuclideanDistance_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInitialize", PyvtkImageEuclideanDistance_SetInitialize, METH_VARARGS,
   "SetInitialize(self, _arg:int) -> None\nC++: virtual void SetInitialize(vtkTypeBool _arg)\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {"GetInitialize", PyvtkImageEuclideanDistance_GetInitialize, METH_VARARGS,
   "GetInitialize(self) -> int\nC++: virtual vtkTypeBool GetInitialize()\n\n"},
  {"InitializeOn", PyvtkImageEuclideanDistance_InitializeOn, METH_VARARGS,
   "InitializeOn(self) -> None\nC++: virtual void InitializeOn()\n\n"},
  {"InitializeOff", PyvtkImageEuclideanDistance_InitializeOff, METH_VARARGS,
   "InitializeOff(self) -> None\nC++: virtual void InitializeOff()\n\n"},
  {"SetConsiderAnisotropy", PyvtkImageEuclideanDistance_SetConsiderAnisotropy, METH_VARARGS,
   "SetConsiderAnisotropy(self, _arg:int) -> None\nC++: virtual void SetConsiderAnisotropy(vtkTypeBool _arg)\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {"GetConsiderAnisotropy", PyvtkImageEuclideanDistance_GetConsiderAnisotropy, METH_VARARGS,
   "GetConsiderAnisotropy(self) -> int\nC++: virtual vtkTypeBool GetConsiderAnisotropy()\n\n"},
  {"ConsiderAnisotropyOn", PyvtkImageEuclideanDistance_ConsiderAnisotropyOn, METH_VARARGS,
   "ConsiderAnisotropyOn(self) -> None\nC++: virtual void ConsiderAnisotropyOn()\n\n"},
  {"ConsiderAnisotropyOff", PyvtkImageEuclideanDistance_ConsiderAnisotropyOff, METH_VARARGS,
   "ConsiderAnisotropyOff(self) -> None\nC++: virtual void ConsiderAnisotropyOff()\n\n"},
  {"SetMaximumDistance", PyvtkImageEuclideanDistance_SetMaximumDistance, METH_VARARGS,
   "SetMaximumDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumDistance(double _arg)\n\nAny distance bigger than this->MaximumDistance will not ne\ncomputed but set to this->MaximumDistance instead.\n"},
  {"GetMaximumDistance", PyvtkImageEuclideanDistance_GetMaximumDistance, METH_VARARGS,
   "GetMaximumDistance(self) -> float\nC++: virtual double GetMaximumDistance()\n\n"},
  {"SetAlgorithm", PyvtkImageEuclideanDistance_SetAlgorithm, METH_VARARGS,
   "SetAlgorithm(self, _arg:int) -> None\nC++: virtual void SetAlgorithm(int _arg)\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {"GetAlgorithm", PyvtkImageEuclideanDistance_GetAlgorithm, METH_VARARGS,
   "GetAlgorithm(self) -> int\nC++: virtual int GetAlgorithm()\n\n"},
  {"SetAlgorithmToSaito", PyvtkImageEuclideanDistance_SetAlgorithmToSaito, METH_VARARGS,
   "SetAlgorithmToSaito(self) -> None\nC++: void SetAlgorithmToSaito()\n\n"},
  {"SetAlgorithmToSaitoCached", PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached, METH_VARARGS,
   "SetAlgorithmToSaitoCached(self) -> None\nC++: void SetAlgorithmToSaitoCached()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageEuclideanDistance_Doc =
  "vtkImageEuclideanDistance - computes 3D Euclidean DT\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageEuclideanDistance implements the Euclidean DT using Saito's\n"
  "algorithm. The distance map produced contains the square of the\n"
  "Euclidean distance values.\n\n"
  "The algorithm has a o(n^(D+1)) complexity over nxnx...xn images in D\n"
  "dimensions. It is very efficient on relatively small images.\n"
  "Cuisenaire's algorithms should be used instead if n >> 500. These are\n"
  "not implemented yet.\n\n"
  "For the special case of images where the slice-size is a multiple of\n"
  "2^N with a large N (typically for 256x256 slices), Saito's algorithm\n"
  "encounters a lot of cache conflicts during the 3rd iteration which\n"
  "can slow it very significantly. In that case, one should use\n"
  "vtkImageEuclideanDistance::SetAlgorithmToSaitoCached() instead for\n"
  "better performance.\n\n"
  "References:\n\n"
  "T. Saito and J.I. Toriwaki. New algorithms for Euclidean distance\n"
  "transformations of an n-dimensional digitised picture with\n"
  "applications. Pattern Recognition, 27(11). pp. 1551--1565, 1994.\n\n"
  "O. Cuisenaire. Distance Transformation: fast algorithms and\n"
  "applications to medical image processing. PhD Thesis, Universite\n"
  "catholique de Louvain, October 1999.\n"
  "http://ltswww.epfl.ch/~cuisenai/papers/oc_thesis.pdf\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageEuclideanDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageEuclideanDistance", // tp_name
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
  PyvtkImageEuclideanDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageEuclideanDistance_StaticNew()
{
  return vtkImageEuclideanDistance::New();
}

PyObject *PyvtkImageEuclideanDistance_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageEuclideanDistance_Type, PyvtkImageEuclideanDistance_Methods,
    "vtkImageEuclideanDistance",
 &PyvtkImageEuclideanDistance_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageDecomposeFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageEuclideanDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageEuclideanDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageEuclideanDistance", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_EDT_SAITO_CACHED", 0 },
        { "VTK_EDT_SAITO", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

