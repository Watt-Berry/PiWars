// python wrapper for vtkImageMapToWindowLevelColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageMapToWindowLevelColors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *dict); }
extern "C" { PyObject *PyvtkImageMapToWindowLevelColors_ClassNew(); }


static PyObject *
PyvtkImageMapToWindowLevelColors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapToWindowLevelColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToWindowLevelColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapToWindowLevelColors *tempr = vtkImageMapToWindowLevelColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToWindowLevelColors::NewInstance());

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
PyvtkImageMapToWindowLevelColors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageMapToWindowLevelColors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageMapToWindowLevelColors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkImageMapToWindowLevelColors::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkImageMapToWindowLevelColors::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkImageMapToWindowLevelColors::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkImageMapToWindowLevelColors::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapToWindowLevelColors_Methods[] = {
  {"IsTypeOf", PyvtkImageMapToWindowLevelColors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapToWindowLevelColors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapToWindowLevelColors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageMapToWindowLevelColors\nC++: static vtkImageMapToWindowLevelColors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapToWindowLevelColors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageMapToWindowLevelColors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageMapToWindowLevelColors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWindow", PyvtkImageMapToWindowLevelColors_SetWindow, METH_VARARGS,
   "SetWindow(self, _arg:float) -> None\nC++: virtual void SetWindow(double _arg)\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {"GetWindow", PyvtkImageMapToWindowLevelColors_GetWindow, METH_VARARGS,
   "GetWindow(self) -> float\nC++: virtual double GetWindow()\n\n"},
  {"SetLevel", PyvtkImageMapToWindowLevelColors_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:float) -> None\nC++: virtual void SetLevel(double _arg)\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {"GetLevel", PyvtkImageMapToWindowLevelColors_GetLevel, METH_VARARGS,
   "GetLevel(self) -> float\nC++: virtual double GetLevel()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageMapToWindowLevelColors_Doc =
  "vtkImageMapToWindowLevelColors - Map an image through a lookup table\nand/or a window/level.\n\n"
  "Superclass: vtkImageMapToColors\n\n"
  "The vtkImageMapToWindowLevelColors filter can be used to perform the\n"
  "following operations depending on its settings:\n"
  "-# If no lookup table is provided, and if the input data has a single\n"
  "   component (any numerical scalar type is allowed), then the data is\n"
  "   mapped through the specified Window/Level.  The type of the output\n"
  "   scalars will be \"unsigned char\" with a range of (0,255).\n"
  "-# If no lookup table is provided, and if the input data is already\n"
  "   unsigned char, and if the Window/Level is set to 255.0/127.5, then\n"
  "   the input data will be passed directly to the output.\n"
  "-# If a lookup table is provided, then the first component of the\n"
  "   input data is mapped through the lookup table (using the Range of\n"
  "   the lookup table), and the resulting color is modulated according\n"
  "   to the Window/Level.  For example, if the input value is 500 and\n"
  "   the Window/Level are 2000/1000, the output value will be RGB*0.25\n"
  "   where RGB is the color assigned by the lookup table and 0.25 is\n"
  "   the modulation factor. See SetWindow() and SetLevel() for the\n"
  "   equations used for modulation. To map scalars through a lookup\n"
  "   table without modulating the resulting color, use\n"
  "   vtkImageMapToColors instead of this filter.\n"
  "@sa\n"
  "vtkLookupTable vtkScalarsToColors\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageMapToWindowLevelColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingColor.vtkImageMapToWindowLevelColors", // tp_name
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
  PyvtkImageMapToWindowLevelColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMapToWindowLevelColors_StaticNew()
{
  return vtkImageMapToWindowLevelColors::New();
}

PyObject *PyvtkImageMapToWindowLevelColors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageMapToWindowLevelColors_Type, PyvtkImageMapToWindowLevelColors_Methods,
    "vtkImageMapToWindowLevelColors",
 &PyvtkImageMapToWindowLevelColors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageMapToColors");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapToWindowLevelColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapToWindowLevelColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapToWindowLevelColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

