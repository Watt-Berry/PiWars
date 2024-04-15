// python wrapper for vtkImageDataLIC2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageDataLIC2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataLIC2D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageDataLIC2D_ClassNew(); }


static PyObject *
PyvtkImageDataLIC2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataLIC2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataLIC2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataLIC2D *tempr = vtkImageDataLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataLIC2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataLIC2D::NewInstance());

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
PyvtkImageDataLIC2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageDataLIC2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageDataLIC2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    int tempr = (ap.IsBound() ?
      op->SetContext(temp0) :
      op->vtkImageDataLIC2D::SetContext(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkImageDataLIC2D::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSteps(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSteps() :
      op->vtkImageDataLIC2D::GetSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepSize(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkImageDataLIC2D::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnification(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetMagnification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkImageDataLIC2D::GetMagnification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLExtensionsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOpenGLExtensionsSupported() :
      op->vtkImageDataLIC2D::GetOpenGLExtensionsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_TranslateInputExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateInputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->TranslateInputExtent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageDataLIC2D::TranslateInputExtent(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDataLIC2D_Methods[] = {
  {"IsTypeOf", PyvtkImageDataLIC2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataLIC2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataLIC2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageDataLIC2D\nC++: static vtkImageDataLIC2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataLIC2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageDataLIC2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageDataLIC2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetContext", PyvtkImageDataLIC2D_SetContext, METH_VARARGS,
   "SetContext(self, context:vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error if the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {"GetContext", PyvtkImageDataLIC2D_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\n"},
  {"SetSteps", PyvtkImageDataLIC2D_SetSteps, METH_VARARGS,
   "SetSteps(self, _arg:int) -> None\nC++: virtual void SetSteps(int _arg)\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {"GetSteps", PyvtkImageDataLIC2D_GetSteps, METH_VARARGS,
   "GetSteps(self) -> int\nC++: virtual int GetSteps()\n\n"},
  {"SetStepSize", PyvtkImageDataLIC2D_SetStepSize, METH_VARARGS,
   "SetStepSize(self, _arg:float) -> None\nC++: virtual void SetStepSize(double _arg)\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell length is the length of the diagonal\nof a cell. Initial value is 1.0. class invariant: StepSize>0.0.\nIn term of visual quality, the smaller the better. The type for\nthe interface is double as VTK interface is double but GPU only\nsupports float. This value will be converted to float in the\nexecution of the algorithm.\n"},
  {"GetStepSize", PyvtkImageDataLIC2D_GetStepSize, METH_VARARGS,
   "GetStepSize(self) -> float\nC++: virtual double GetStepSize()\n\n"},
  {"SetMagnification", PyvtkImageDataLIC2D_SetMagnification, METH_VARARGS,
   "SetMagnification(self, _arg:int) -> None\nC++: virtual void SetMagnification(int _arg)\n\nThe magnification factor. Default is 1\n"},
  {"GetMagnification", PyvtkImageDataLIC2D_GetMagnification, METH_VARARGS,
   "GetMagnification(self) -> int\nC++: virtual int GetMagnification()\n\n"},
  {"GetOpenGLExtensionsSupported", PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported, METH_VARARGS,
   "GetOpenGLExtensionsSupported(self) -> int\nC++: virtual int GetOpenGLExtensionsSupported()\n\nCheck if the required OpenGL extensions / GPU are supported.\n"},
  {"TranslateInputExtent", PyvtkImageDataLIC2D_TranslateInputExtent, METH_VARARGS,
   "TranslateInputExtent(self, inExt:(int, ...), inWholeExtent:(int,\n    ...), outExt:[int, ...]) -> None\nC++: void TranslateInputExtent(const int *inExt,\n    const int *inWholeExtent, int *outExt)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageDataLIC2D_Doc =
  "vtkImageDataLIC2D -  GPU implementation of a Line Integral\nConvolution, a technique for\n imaging vector fields.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "The input on port 0 is an vtkImageData with extents of a 2D image. It\n"
  "needs\n"
  " a vector field on point data. This filter only works on point\n"
  "vectors. One\n"
  " can use a vtkCellDataToPointData filter to convert cell vectors to\n"
  "point\n"
  " vectors.\n\n\n"
  " Port 1 is a special port for customized noise input. It is an\n"
  "optional port.\n"
  " If noise input is not specified, then the filter using\n"
  "vtkImageNoiseSource to\n"
  " generate a 128x128 noise texture.\n\n"
  "@sa\n"
  " vtkSurfaceLICPainter vtkLineIntegralConvolution2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageDataLIC2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkImageDataLIC2D", // tp_name
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
  PyvtkImageDataLIC2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataLIC2D_StaticNew()
{
  return vtkImageDataLIC2D::New();
}

PyObject *PyvtkImageDataLIC2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageDataLIC2D_Type, PyvtkImageDataLIC2D_Methods,
    "vtkImageDataLIC2D",
 &PyvtkImageDataLIC2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDataLIC2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataLIC2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataLIC2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

