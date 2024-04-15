// python wrapper for vtkStructuredExtent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredExtent.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredExtent(PyObject *dict); }
extern "C" { PyObject *PyvtkStructuredExtent_ClassNew(); }


static PyObject *
PyvtkStructuredExtent_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredExtent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredExtent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredExtent *tempr = vtkStructuredExtent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredExtent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredExtent::NewInstance());

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
PyvtkStructuredExtent_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredExtent::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredExtent::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Clamp(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Clamp");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkStructuredExtent::Clamp(temp0, temp1);

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
PyvtkStructuredExtent_StrictlySmaller(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "StrictlySmaller");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = vtkStructuredExtent::StrictlySmaller(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Smaller(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Smaller");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = vtkStructuredExtent::Smaller(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Grow_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkStructuredExtent::Grow(temp0, temp1);

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
PyvtkStructuredExtent_Grow_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredExtent::Grow(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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

static PyObject *
PyvtkStructuredExtent_Grow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkStructuredExtent_Grow_s1(self, args);
    case 3:
      return PyvtkStructuredExtent_Grow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Grow");
  return nullptr;
}


static PyObject *
PyvtkStructuredExtent_Transform(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transform");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredExtent::Transform(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkStructuredExtent_GetDimensions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredExtent::GetDimensions(temp0, temp1);

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

static PyMethodDef PyvtkStructuredExtent_Methods[] = {
  {"IsTypeOf", PyvtkStructuredExtent_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredExtent_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredExtent_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredExtent\nC++: static vtkStructuredExtent *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredExtent_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredExtent\nC++: vtkStructuredExtent *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredExtent_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredExtent_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clamp", PyvtkStructuredExtent_Clamp, METH_VARARGS,
   "Clamp(ext:[int, int, int, int, int, int], wholeExt:(int, int, int,\n     int, int, int)) -> None\nC++: static void Clamp(int ext[6], const int wholeExt[6])\n\nClamps ext to fit in wholeExt.\n"},
  {"StrictlySmaller", PyvtkStructuredExtent_StrictlySmaller, METH_VARARGS,
   "StrictlySmaller(ext:(int, int, int, int, int, int), wholeExt:(int,\n     int, int, int, int, int)) -> bool\nC++: static bool StrictlySmaller(const int ext[6],\n    const int wholeExt[6])\n\nReturns true if ext is fits within wholeExt with at least 1\ndimension smaller than the wholeExt.\n"},
  {"Smaller", PyvtkStructuredExtent_Smaller, METH_VARARGS,
   "Smaller(ext:(int, int, int, int, int, int), wholeExt:(int, int,\n    int, int, int, int)) -> bool\nC++: static bool Smaller(const int ext[6], const int wholeExt[6])\n\nReturns if ext fits within wholeExt. Unlike StrictlySmaller, this\nmethod returns true even if ext == wholeExt.\n"},
  {"Grow", PyvtkStructuredExtent_Grow, METH_VARARGS,
   "Grow(ext:[int, int, int, int, int, int], count:int) -> None\nC++: static void Grow(int ext[6], int count)\nGrow(ext:[int, int, int, int, int, int], count:int, wholeExt:[int,\n     int, int, int, int, int]) -> None\nC++: static void Grow(int ext[6], int count, int wholeExt[6])\n\nGrows the ext on each side by the given count.\n"},
  {"Transform", PyvtkStructuredExtent_Transform, METH_VARARGS,
   "Transform(ext:[int, int, int, int, int, int], wholeExt:[int, int,\n    int, int, int, int]) -> None\nC++: static void Transform(int ext[6], int wholeExt[6])\n\nMakes ext relative to wholeExt.\n"},
  {"GetDimensions", PyvtkStructuredExtent_GetDimensions, METH_VARARGS,
   "GetDimensions(ext:(int, int, int, int, int, int), dims:[int, int,\n    int]) -> None\nC++: static void GetDimensions(const int ext[6], int dims[3])\n\nGiven the extents, computes the dimensions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStructuredExtent_Doc =
  "vtkStructuredExtent - helper class to aid working with structured\n extents.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkStructuredExtent is an helper class that helps in arithmetic with\n"
  " structured extents. It defines a bunch of static methods (most of\n"
  "which are\n"
  " inlined) to aid in dealing with extents.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredExtent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStructuredExtent", // tp_name
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
  PyvtkStructuredExtent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredExtent_StaticNew()
{
  return vtkStructuredExtent::New();
}

PyObject *PyvtkStructuredExtent_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredExtent_Type, PyvtkStructuredExtent_Methods,
    "vtkStructuredExtent",
 &PyvtkStructuredExtent_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredExtent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredExtent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredExtent", o) != 0)
  {
    Py_DECREF(o);
  }

}

