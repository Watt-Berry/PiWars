// python wrapper for vtkBlankStructuredGridWithImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBlankStructuredGridWithImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlankStructuredGridWithImage(PyObject *dict); }
extern "C" { PyObject *PyvtkBlankStructuredGridWithImage_ClassNew(); }


static PyObject *
PyvtkBlankStructuredGridWithImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlankStructuredGridWithImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlankStructuredGridWithImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlankStructuredGridWithImage *tempr = vtkBlankStructuredGridWithImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlankStructuredGridWithImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlankStructuredGridWithImage::NewInstance());

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
PyvtkBlankStructuredGridWithImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBlankStructuredGridWithImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBlankStructuredGridWithImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_SetBlankingInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlankingInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetBlankingInputData(temp0);
    }
    else
    {
      op->vtkBlankStructuredGridWithImage::SetBlankingInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_GetBlankingInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlankingInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBlankingInput() :
      op->vtkBlankStructuredGridWithImage::GetBlankingInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGridWithImage_Methods[] = {
  {"IsTypeOf", PyvtkBlankStructuredGridWithImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlankStructuredGridWithImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlankStructuredGridWithImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBlankStructuredGridWithImage\nC++: static vtkBlankStructuredGridWithImage *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlankStructuredGridWithImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBlankStructuredGridWithImage\nC++: vtkBlankStructuredGridWithImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBlankStructuredGridWithImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBlankStructuredGridWithImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBlankingInputData", PyvtkBlankStructuredGridWithImage_SetBlankingInputData, METH_VARARGS,
   "SetBlankingInputData(self, input:vtkImageData) -> None\nC++: void SetBlankingInputData(vtkImageData *input)\n\nSet / get the input image used to perform the blanking.\n"},
  {"GetBlankingInput", PyvtkBlankStructuredGridWithImage_GetBlankingInput, METH_VARARGS,
   "GetBlankingInput(self) -> vtkImageData\nC++: vtkImageData *GetBlankingInput()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBlankStructuredGridWithImage_Doc =
  "vtkBlankStructuredGridWithImage - blank a structured grid with an\nimage\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "This filter can be used to set the blanking in a structured grid with\n"
  "an image. The filter takes two inputs: the structured grid to blank,\n"
  "and the image used to set the blanking. Make sure that the dimensions\n"
  "of both the image and the structured grid are identical.\n\n"
  "Note that the image is interpreted as follows: zero values indicate\n"
  "that the structured grid point is blanked; non-zero values indicate\n"
  "that the structured grid point is visible. The blanking data must be\n"
  "unsigned char.\n\n"
  "@sa\n"
  "vtkStructuredGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlankStructuredGridWithImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkBlankStructuredGridWithImage", // tp_name
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
  PyvtkBlankStructuredGridWithImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlankStructuredGridWithImage_StaticNew()
{
  return vtkBlankStructuredGridWithImage::New();
}

PyObject *PyvtkBlankStructuredGridWithImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBlankStructuredGridWithImage_Type, PyvtkBlankStructuredGridWithImage_Methods,
    "vtkBlankStructuredGridWithImage",
 &PyvtkBlankStructuredGridWithImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlankStructuredGridWithImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlankStructuredGridWithImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlankStructuredGridWithImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

