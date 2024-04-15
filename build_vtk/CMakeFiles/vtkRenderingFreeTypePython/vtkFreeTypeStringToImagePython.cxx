// python wrapper for vtkFreeTypeStringToImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkFreeTypeStringToImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFreeTypeStringToImage(PyObject *dict); }
extern "C" { PyObject *PyvtkFreeTypeStringToImage_ClassNew(); }


static PyObject *
PyvtkFreeTypeStringToImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFreeTypeStringToImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFreeTypeStringToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFreeTypeStringToImage *tempr = vtkFreeTypeStringToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFreeTypeStringToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFreeTypeStringToImage::NewInstance());

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
PyvtkFreeTypeStringToImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFreeTypeStringToImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFreeTypeStringToImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetBounds(temp0, temp1, temp2) :
      op->vtkFreeTypeStringToImage::GetBounds(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
  size_t size4 = 0;
  int store4[2*2];
  int *temp4 = nullptr;
  int *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeStringToImage::RenderString(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerOfTwo(temp0);
    }
    else
    {
      op->vtkFreeTypeStringToImage::SetScaleToPowerOfTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkFreeTypeStringToImage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFreeTypeStringToImage"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkFreeTypeStringToImage::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeStringToImage_Methods[] = {
  {"IsTypeOf", PyvtkFreeTypeStringToImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFreeTypeStringToImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFreeTypeStringToImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFreeTypeStringToImage\nC++: static vtkFreeTypeStringToImage *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFreeTypeStringToImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFreeTypeStringToImage\nC++: vtkFreeTypeStringToImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFreeTypeStringToImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFreeTypeStringToImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkFreeTypeStringToImage_GetBounds, METH_VARARGS,
   "GetBounds(self, property:vtkTextProperty, string:str, dpi:int)\n    -> vtkVector2i\nC++: vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string, int dpi) override;\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {"RenderString", PyvtkFreeTypeStringToImage_RenderString, METH_VARARGS,
   "RenderString(self, property:vtkTextProperty, string:str, dpi:int,\n    data:vtkImageData, textDims:[int, int]=...) -> int\nC++: int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, int dpi, vtkImageData *data,\n    int textDims[2]=nullptr) override;\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text.\n"},
  {"SetScaleToPowerOfTwo", PyvtkFreeTypeStringToImage_SetScaleToPowerOfTwo, METH_VARARGS,
   "SetScaleToPowerOfTwo(self, scale:bool) -> None\nC++: void SetScaleToPowerOfTwo(bool scale) override;\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {"DeepCopy", PyvtkFreeTypeStringToImage_DeepCopy, METH_VARARGS,
   "DeepCopy(self, utility:vtkFreeTypeStringToImage) -> None\nC++: void DeepCopy(vtkFreeTypeStringToImage *utility)\n\nMake a deep copy of the supplied utility class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFreeTypeStringToImage_Doc =
  "vtkFreeTypeStringToImage - render the supplied text to an image.\n\n"
  "Superclass: vtkStringToImage\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFreeTypeStringToImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingFreeType.vtkFreeTypeStringToImage", // tp_name
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
  PyvtkFreeTypeStringToImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFreeTypeStringToImage_StaticNew()
{
  return vtkFreeTypeStringToImage::New();
}

PyObject *PyvtkFreeTypeStringToImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFreeTypeStringToImage_Type, PyvtkFreeTypeStringToImage_Methods,
    "vtkFreeTypeStringToImage",
 &PyvtkFreeTypeStringToImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStringToImage");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFreeTypeStringToImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFreeTypeStringToImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeStringToImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

