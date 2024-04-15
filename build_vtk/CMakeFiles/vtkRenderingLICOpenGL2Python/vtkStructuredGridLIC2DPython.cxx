// python wrapper for vtkStructuredGridLIC2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredGridLIC2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridLIC2D(PyObject *dict); }
extern "C" { PyObject *PyvtkStructuredGridLIC2D_ClassNew(); }


static PyObject *
PyvtkStructuredGridLIC2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridLIC2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridLIC2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridLIC2D *tempr = vtkStructuredGridLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridLIC2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridLIC2D::NewInstance());

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
PyvtkStructuredGridLIC2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredGridLIC2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredGridLIC2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    int tempr = (ap.IsBound() ?
      op->SetContext(temp0) :
      op->vtkStructuredGridLIC2D::SetContext(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkStructuredGridLIC2D::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

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
      op->vtkStructuredGridLIC2D::SetSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSteps() :
      op->vtkStructuredGridLIC2D::GetSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

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
      op->vtkStructuredGridLIC2D::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkStructuredGridLIC2D::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

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
      op->vtkStructuredGridLIC2D::SetMagnification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMinValue() :
      op->vtkStructuredGridLIC2D::GetMagnificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMaxValue() :
      op->vtkStructuredGridLIC2D::GetMagnificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkStructuredGridLIC2D::GetMagnification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetFBOSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFBOSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFBOSuccess() :
      op->vtkStructuredGridLIC2D::GetFBOSuccess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetLICSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLICSuccess() :
      op->vtkStructuredGridLIC2D::GetLICSuccess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredGridLIC2D_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridLIC2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridLIC2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridLIC2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredGridLIC2D\nC++: static vtkStructuredGridLIC2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridLIC2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredGridLIC2D\nC++: vtkStructuredGridLIC2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredGridLIC2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredGridLIC2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetContext", PyvtkStructuredGridLIC2D_SetContext, METH_VARARGS,
   "SetContext(self, context:vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error if the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {"GetContext", PyvtkStructuredGridLIC2D_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\n"},
  {"SetSteps", PyvtkStructuredGridLIC2D_SetSteps, METH_VARARGS,
   "SetSteps(self, _arg:int) -> None\nC++: virtual void SetSteps(int _arg)\n\nNumber of steps. Initial value is 1. class invariant: Steps>0. In\nterm of visual quality, the greater the better.\n"},
  {"GetSteps", PyvtkStructuredGridLIC2D_GetSteps, METH_VARARGS,
   "GetSteps(self) -> int\nC++: virtual int GetSteps()\n\n"},
  {"SetStepSize", PyvtkStructuredGridLIC2D_SetStepSize, METH_VARARGS,
   "SetStepSize(self, _arg:float) -> None\nC++: virtual void SetStepSize(double _arg)\n\nStep size. WE ARE NOT SURE YET about the space where we define\nthe step. If the image data has different spacing in each\ndimension, it is an issue. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {"GetStepSize", PyvtkStructuredGridLIC2D_GetStepSize, METH_VARARGS,
   "GetStepSize(self) -> float\nC++: virtual double GetStepSize()\n\n"},
  {"SetMagnification", PyvtkStructuredGridLIC2D_SetMagnification, METH_VARARGS,
   "SetMagnification(self, _arg:int) -> None\nC++: virtual void SetMagnification(int _arg)\n\nThe magnification factor. Default is 1\n"},
  {"GetMagnificationMinValue", PyvtkStructuredGridLIC2D_GetMagnificationMinValue, METH_VARARGS,
   "GetMagnificationMinValue(self) -> int\nC++: virtual int GetMagnificationMinValue()\n\n"},
  {"GetMagnificationMaxValue", PyvtkStructuredGridLIC2D_GetMagnificationMaxValue, METH_VARARGS,
   "GetMagnificationMaxValue(self) -> int\nC++: virtual int GetMagnificationMaxValue()\n\n"},
  {"GetMagnification", PyvtkStructuredGridLIC2D_GetMagnification, METH_VARARGS,
   "GetMagnification(self) -> int\nC++: virtual int GetMagnification()\n\n"},
  {"GetFBOSuccess", PyvtkStructuredGridLIC2D_GetFBOSuccess, METH_VARARGS,
   "GetFBOSuccess(self) -> int\nC++: int GetFBOSuccess()\n\nCheck if FBO is started properly.\n"},
  {"GetLICSuccess", PyvtkStructuredGridLIC2D_GetLICSuccess, METH_VARARGS,
   "GetLICSuccess(self) -> int\nC++: int GetLICSuccess()\n\nCheck if LIC runs properly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStructuredGridLIC2D_Doc =
  "vtkStructuredGridLIC2D - GPU implementation of a Line Integral\nConvolution, a technique for imaging vector fields.\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "The input on port 0 is an 2D vtkStructuredGrid. It needs a vector\n"
  "field on point data. Port 1 is a special port for customized noise\n"
  "input. It is an optional port. If not present, noise is generated by\n"
  "the filter. Even if none-power-of-two texture are supported, giving a\n"
  "power-of-two image may result in faster execution on the GPU.\n\n"
  "Please refer to Forssell, L. K., \"Visualizing flow over curvilinear\n"
  "grid surfaces using line integral convolution\", Visualization 94\n"
  "Conference Proceedings, pages 240-247, IEEE Computer Society, 1994\n"
  "for details of the algorithm.\n\n"
  "@par Required OpenGL Extensions: GL_ARB_texture_non_power_of_two\n"
  "GL_VERSION_2_0 GL_ARB_texture_float GL_ARB_draw_buffers\n"
  "GL_EXT_framebuffer_object GL_ARB_pixel_buffer_object\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredGridLIC2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkStructuredGridLIC2D", // tp_name
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
  PyvtkStructuredGridLIC2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGridLIC2D_StaticNew()
{
  return vtkStructuredGridLIC2D::New();
}

PyObject *PyvtkStructuredGridLIC2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredGridLIC2D_Type, PyvtkStructuredGridLIC2D_Methods,
    "vtkStructuredGridLIC2D",
 &PyvtkStructuredGridLIC2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredGridLIC2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridLIC2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridLIC2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

