// python wrapper for vtkImageDataToUniformGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageDataToUniformGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataToUniformGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkImageDataToUniformGrid_ClassNew(); }


static PyObject *
PyvtkImageDataToUniformGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataToUniformGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataToUniformGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataToUniformGrid *tempr = vtkImageDataToUniformGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataToUniformGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataToUniformGrid::NewInstance());

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
PyvtkImageDataToUniformGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageDataToUniformGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageDataToUniformGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_SetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverse(temp0);
    }
    else
    {
      op->vtkImageDataToUniformGrid::SetReverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseMinValue() :
      op->vtkImageDataToUniformGrid::GetReverseMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseMaxValue() :
      op->vtkImageDataToUniformGrid::GetReverseMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverse() :
      op->vtkImageDataToUniformGrid::GetReverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_ReverseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseOn();
    }
    else
    {
      op->vtkImageDataToUniformGrid::ReverseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_ReverseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseOff();
    }
    else
    {
      op->vtkImageDataToUniformGrid::ReverseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDataToUniformGrid_Methods[] = {
  {"IsTypeOf", PyvtkImageDataToUniformGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataToUniformGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataToUniformGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageDataToUniformGrid\nC++: static vtkImageDataToUniformGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataToUniformGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageDataToUniformGrid\nC++: vtkImageDataToUniformGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageDataToUniformGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageDataToUniformGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetReverse", PyvtkImageDataToUniformGrid_SetReverse, METH_VARARGS,
   "SetReverse(self, _arg:int) -> None\nC++: virtual void SetReverse(vtkTypeBool _arg)\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {"GetReverseMinValue", PyvtkImageDataToUniformGrid_GetReverseMinValue, METH_VARARGS,
   "GetReverseMinValue(self) -> int\nC++: virtual vtkTypeBool GetReverseMinValue()\n\n"},
  {"GetReverseMaxValue", PyvtkImageDataToUniformGrid_GetReverseMaxValue, METH_VARARGS,
   "GetReverseMaxValue(self) -> int\nC++: virtual vtkTypeBool GetReverseMaxValue()\n\n"},
  {"GetReverse", PyvtkImageDataToUniformGrid_GetReverse, METH_VARARGS,
   "GetReverse(self) -> int\nC++: virtual vtkTypeBool GetReverse()\n\n"},
  {"ReverseOn", PyvtkImageDataToUniformGrid_ReverseOn, METH_VARARGS,
   "ReverseOn(self) -> None\nC++: virtual void ReverseOn()\n\n"},
  {"ReverseOff", PyvtkImageDataToUniformGrid_ReverseOff, METH_VARARGS,
   "ReverseOff(self) -> None\nC++: virtual void ReverseOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageDataToUniformGrid_Doc =
  "vtkImageDataToUniformGrid - convert vtkImageData to vtkUniformGrid\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Convert a vtkImageData to vtkUniformGrid and set blanking based on\n"
  "specified by named arrays. By default, values of 0 in the named array\n"
  "will result in the point or cell being blanked. Set Reverse to 1 to\n"
  "indicate that values of 0 will result in the point or cell to not be\n"
  "blanked.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageDataToUniformGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkImageDataToUniformGrid", // tp_name
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
  PyvtkImageDataToUniformGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataToUniformGrid_StaticNew()
{
  return vtkImageDataToUniformGrid::New();
}

PyObject *PyvtkImageDataToUniformGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageDataToUniformGrid_Type, PyvtkImageDataToUniformGrid_Methods,
    "vtkImageDataToUniformGrid",
 &PyvtkImageDataToUniformGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDataToUniformGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataToUniformGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataToUniformGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

