// python wrapper for vtkStereoCompositor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStereoCompositor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStereoCompositor(PyObject *dict); }
extern "C" { PyObject *PyvtkStereoCompositor_ClassNew(); }


static PyObject *
PyvtkStereoCompositor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStereoCompositor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStereoCompositor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStereoCompositor *tempr = vtkStereoCompositor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStereoCompositor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStereoCompositor::NewInstance());

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
PyvtkStereoCompositor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStereoCompositor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStereoCompositor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_RedBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedBlue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->RedBlue(temp0, temp1) :
      op->vtkStereoCompositor::RedBlue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_Anaglyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Anaglyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  float temp2;
  const size_t size3 = 2;
  int temp3[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    bool tempr = (ap.IsBound() ?
      op->Anaglyph(temp0, temp1, temp2, temp3) :
      op->vtkStereoCompositor::Anaglyph(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_Interlaced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interlaced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->Interlaced(temp0, temp1, temp2) :
      op->vtkStereoCompositor::Interlaced(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_Dresden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dresden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->Dresden(temp0, temp1, temp2) :
      op->vtkStereoCompositor::Dresden(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_Checkerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Checkerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->Checkerboard(temp0, temp1, temp2) :
      op->vtkStereoCompositor::Checkerboard(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStereoCompositor_SplitViewportHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitViewportHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStereoCompositor *op = static_cast<vtkStereoCompositor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkUnsignedCharArray *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->SplitViewportHorizontal(temp0, temp1, temp2) :
      op->vtkStereoCompositor::SplitViewportHorizontal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStereoCompositor_Methods[] = {
  {"IsTypeOf", PyvtkStereoCompositor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStereoCompositor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStereoCompositor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStereoCompositor\nC++: static vtkStereoCompositor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStereoCompositor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStereoCompositor\nC++: vtkStereoCompositor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStereoCompositor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStereoCompositor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RedBlue", PyvtkStereoCompositor_RedBlue, METH_VARARGS,
   "RedBlue(self, rgbLeftNResult:vtkUnsignedCharArray,\n    rgbRight:vtkUnsignedCharArray) -> bool\nC++: bool RedBlue(vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight)\n\nMethods for compositing left and right eye images based on\nvarious supported modes. See vtkRenderWindow::SetStereoType for\nexplanation of each of these modes. Note that all these methods\ngenerate the result in the buffer passed for the left eye.\n"},
  {"Anaglyph", PyvtkStereoCompositor_Anaglyph, METH_VARARGS,
   "Anaglyph(self, rgbLeftNResult:vtkUnsignedCharArray,\n    rgbRight:vtkUnsignedCharArray, colorSaturation:float,\n    colorMask:(int, int)) -> bool\nC++: bool Anaglyph(vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight, float colorSaturation,\n    const int colorMask[2])\n\n"},
  {"Interlaced", PyvtkStereoCompositor_Interlaced, METH_VARARGS,
   "Interlaced(self, rgbLeftNResult:vtkUnsignedCharArray,\n    rgbRight:vtkUnsignedCharArray, size:(int, int)) -> bool\nC++: bool Interlaced(vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight, const int size[2])\n\n"},
  {"Dresden", PyvtkStereoCompositor_Dresden, METH_VARARGS,
   "Dresden(self, rgbLeftNResult:vtkUnsignedCharArray,\n    rgbRight:vtkUnsignedCharArray, size:(int, int)) -> bool\nC++: bool Dresden(vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight, const int size[2])\n\n"},
  {"Checkerboard", PyvtkStereoCompositor_Checkerboard, METH_VARARGS,
   "Checkerboard(self, rgbLeftNResult:vtkUnsignedCharArray,\n    rgbRight:vtkUnsignedCharArray, size:(int, int)) -> bool\nC++: bool Checkerboard(vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight, const int size[2])\n\n"},
  {"SplitViewportHorizontal", PyvtkStereoCompositor_SplitViewportHorizontal, METH_VARARGS,
   "SplitViewportHorizontal(self, rgbLeftNResult:vtkUnsignedCharArray,\n     rgbRight:vtkUnsignedCharArray, size:(int, int)) -> bool\nC++: bool SplitViewportHorizontal(\n    vtkUnsignedCharArray *rgbLeftNResult,\n    vtkUnsignedCharArray *rgbRight, const int size[2])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStereoCompositor_Doc =
  "vtkStereoCompositor - helper class to generate composited stereo\nimages.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkStereoCompositor is used by vtkRenderWindow to composite left and\n"
  "right eye rendering results into a single color buffer.\n\n"
  "Note that all methods on vtkStereoCompositor take in pointers to the\n"
  "left and right rendering results and generate the result in the\n"
  "buffer passed for the left eye.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStereoCompositor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkStereoCompositor", // tp_name
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
  PyvtkStereoCompositor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStereoCompositor_StaticNew()
{
  return vtkStereoCompositor::New();
}

PyObject *PyvtkStereoCompositor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStereoCompositor_Type, PyvtkStereoCompositor_Methods,
    "vtkStereoCompositor",
 &PyvtkStereoCompositor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStereoCompositor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStereoCompositor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStereoCompositor", o) != 0)
  {
    Py_DECREF(o);
  }

}

