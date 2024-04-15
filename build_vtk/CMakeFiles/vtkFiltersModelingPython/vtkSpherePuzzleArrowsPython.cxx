// python wrapper for vtkSpherePuzzleArrows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpherePuzzleArrows.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *dict); }
extern "C" { PyObject *PyvtkSpherePuzzleArrows_ClassNew(); }


static PyObject *
PyvtkSpherePuzzleArrows_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpherePuzzleArrows::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpherePuzzleArrows::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpherePuzzleArrows *tempr = vtkSpherePuzzleArrows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpherePuzzleArrows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpherePuzzleArrows::NewInstance());

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
PyvtkSpherePuzzleArrows_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpherePuzzleArrows::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpherePuzzleArrows::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPermutation(temp0);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  vtkSpherePuzzle *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpherePuzzle"))
  {
    if (ap.IsBound())
    {
      op->SetPermutation(temp0);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_SetPermutation_Methods[] = {
  {"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation_s1, METH_VARARGS,
   "@P *i"},
  {"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation_s2, METH_VARARGS,
   "@V *vtkSpherePuzzle"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpherePuzzleArrows_SetPermutation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPermutation");
  return nullptr;
}


static PyObject *
PyvtkSpherePuzzleArrows_GetPermutation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  size_t sizer = 32;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPermutation() :
      op->vtkSpherePuzzleArrows::GetPermutation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutationComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutationComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPermutationComponent(temp0, temp1);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutationComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_Methods[] = {
  {"IsTypeOf", PyvtkSpherePuzzleArrows_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpherePuzzleArrows_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpherePuzzleArrows_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpherePuzzleArrows\nC++: static vtkSpherePuzzleArrows *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpherePuzzleArrows_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpherePuzzleArrows_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpherePuzzleArrows_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation, METH_VARARGS,
   "SetPermutation(self, data:(int, ...)) -> None\nC++: virtual void SetPermutation(const int data[])\nSetPermutation(self, puz:vtkSpherePuzzle) -> None\nC++: void SetPermutation(vtkSpherePuzzle *puz)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {"GetPermutation", PyvtkSpherePuzzleArrows_GetPermutation, METH_VARARGS,
   "GetPermutation(self) -> (int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int)\nC++: virtual int *GetPermutation()\n\n"},
  {"SetPermutationComponent", PyvtkSpherePuzzleArrows_SetPermutationComponent, METH_VARARGS,
   "SetPermutationComponent(self, comp:int, val:int) -> None\nC++: void SetPermutationComponent(int comp, int val)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSpherePuzzleArrows_Doc =
  "vtkSpherePuzzleArrows - Visualize permutation of the sphere puzzle.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSpherePuzzleArrows creates\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpherePuzzleArrows_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkSpherePuzzleArrows", // tp_name
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
  PyvtkSpherePuzzleArrows_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpherePuzzleArrows_StaticNew()
{
  return vtkSpherePuzzleArrows::New();
}

PyObject *PyvtkSpherePuzzleArrows_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpherePuzzleArrows_Type, PyvtkSpherePuzzleArrows_Methods,
    "vtkSpherePuzzleArrows",
 &PyvtkSpherePuzzleArrows_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpherePuzzleArrows(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpherePuzzleArrows_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpherePuzzleArrows", o) != 0)
  {
    Py_DECREF(o);
  }

}

