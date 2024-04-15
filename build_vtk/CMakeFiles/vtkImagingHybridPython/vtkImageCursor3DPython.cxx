// python wrapper for vtkImageCursor3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageCursor3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCursor3D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageCursor3D_ClassNew(); }


static PyObject *
PyvtkImageCursor3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCursor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCursor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCursor3D *tempr = vtkImageCursor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCursor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCursor3D::NewInstance());

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
PyvtkImageCursor3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageCursor3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageCursor3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCursor3D_SetCursorPosition_s1(self, args);
    case 1:
      return PyvtkImageCursor3D_SetCursorPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorPosition");
  return nullptr;
}


static PyObject *
PyvtkImageCursor3D_GetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCursorPosition() :
      op->vtkImageCursor3D::GetCursorPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorValue(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCursorValue() :
      op->vtkImageCursor3D::GetCursorValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorRadius(temp0);
    }
    else
    {
      op->vtkImageCursor3D::SetCursorRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCursorRadius() :
      op->vtkImageCursor3D::GetCursorRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCursor3D_Methods[] = {
  {"IsTypeOf", PyvtkImageCursor3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCursor3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCursor3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageCursor3D\nC++: static vtkImageCursor3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCursor3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageCursor3D\nC++: vtkImageCursor3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageCursor3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageCursor3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCursorPosition", PyvtkImageCursor3D_SetCursorPosition, METH_VARARGS,
   "SetCursorPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetCursorPosition(double _arg1, double _arg2,\n    double _arg3)\nSetCursorPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCursorPosition(const double _arg[3])\n\nSets/Gets the center point of the 3d cursor.\n"},
  {"GetCursorPosition", PyvtkImageCursor3D_GetCursorPosition, METH_VARARGS,
   "GetCursorPosition(self) -> (float, float, float)\nC++: virtual double *GetCursorPosition()\n\n"},
  {"SetCursorValue", PyvtkImageCursor3D_SetCursorValue, METH_VARARGS,
   "SetCursorValue(self, _arg:float) -> None\nC++: virtual void SetCursorValue(double _arg)\n\nSets/Gets what pixel value to draw the cursor in.\n"},
  {"GetCursorValue", PyvtkImageCursor3D_GetCursorValue, METH_VARARGS,
   "GetCursorValue(self) -> float\nC++: virtual double GetCursorValue()\n\n"},
  {"SetCursorRadius", PyvtkImageCursor3D_SetCursorRadius, METH_VARARGS,
   "SetCursorRadius(self, _arg:int) -> None\nC++: virtual void SetCursorRadius(int _arg)\n\nSets/Gets the radius of the cursor. The radius determines how far\nthe axis lines project out from the cursors center.\n"},
  {"GetCursorRadius", PyvtkImageCursor3D_GetCursorRadius, METH_VARARGS,
   "GetCursorRadius(self) -> int\nC++: virtual int GetCursorRadius()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageCursor3D_Doc =
  "vtkImageCursor3D - Paints a cursor on top of an image or volume.\n\n"
  "Superclass: vtkImageInPlaceFilter\n\n"
  "vtkImageCursor3D will draw a cursor on a 2d image or 3d volume.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageCursor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkImageCursor3D", // tp_name
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
  PyvtkImageCursor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCursor3D_StaticNew()
{
  return vtkImageCursor3D::New();
}

PyObject *PyvtkImageCursor3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageCursor3D_Type, PyvtkImageCursor3D_Methods,
    "vtkImageCursor3D",
 &PyvtkImageCursor3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageInPlaceFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCursor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCursor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCursor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

