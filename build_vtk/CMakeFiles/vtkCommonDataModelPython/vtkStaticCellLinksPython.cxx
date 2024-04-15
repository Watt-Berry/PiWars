// python wrapper for vtkStaticCellLinks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStaticCellLinks.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCellLinks(PyObject *dict); }
extern "C" { PyObject *PyvtkStaticCellLinks_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLinks_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLinks_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLinks_ClassNew
#endif

static PyObject *
PyvtkStaticCellLinks_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCellLinks *tempr = vtkStaticCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCellLinks::NewInstance());

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
PyvtkStaticCellLinks_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStaticCellLinks::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStaticCellLinks::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLinks();
    }
    else
    {
      op->vtkStaticCellLinks::BuildLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells(temp0) :
      op->vtkStaticCellLinks::GetNumberOfCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetNcells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNcells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNcells(temp0) :
      op->vtkStaticCellLinks::GetNcells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetCells(temp0) :
      op->vtkStaticCellLinks::GetCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_SelectCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  long long save0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SelectCells(temp0, temp1);
    }
    else
    {
      op->vtkStaticCellLinks::SelectCells(temp0, temp1);
    }

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
PyvtkStaticCellLinks_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStaticCellLinks::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkStaticCellLinks::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkStaticCellLinks::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkStaticCellLinks::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  vtkAbstractCellLinks *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLinks"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkStaticCellLinks::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkStaticCellLinks_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStaticCellLinks_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStaticCellLinks_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStaticCellLinks\nC++: static vtkStaticCellLinks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStaticCellLinks_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStaticCellLinks\nC++: vtkStaticCellLinks *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStaticCellLinks_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStaticCellLinks_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"BuildLinks", PyvtkStaticCellLinks_BuildLinks, METH_VARARGS,
   "BuildLinks(self) -> None\nC++: void BuildLinks() override;\n\nBuild the link list array from the input dataset.\n"},
  {"GetNumberOfCells", PyvtkStaticCellLinks_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self, ptId:int) -> int\nC++: vtkIdType GetNumberOfCells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId.\n"},
  {"GetNcells", PyvtkStaticCellLinks_GetNcells, METH_VARARGS,
   "GetNcells(self, ptId:int) -> int\nC++: vtkIdType GetNcells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId. This\nis an alias for GetNumberOfCells(); consistent with the\nvtkCellLinks API.\n"},
  {"GetCells", PyvtkStaticCellLinks_GetCells, METH_VARARGS,
   "GetCells(self, ptId:int) -> Pointer\nC++: vtkIdType *GetCells(vtkIdType ptId)\n\nReturn a list of cell ids using the specified point.\n"},
  {"SelectCells", PyvtkStaticCellLinks_SelectCells, METH_VARARGS,
   "SelectCells(self, minMaxDegree:[int, int], cellSelection:[int,\n    ...]) -> None\nC++: void SelectCells(vtkIdType minMaxDegree[2],\n    unsigned char *cellSelection) override;\n\nSelect all cells with a point degree in the range\n[minDegree,maxDegree). The degree is the number of cells using a\npoint. The selection is indicated through the provided unsigned\nchar array, with a non-zero value indicates selection. The memory\nallocated for cellSelection must be the maximum cell id\nreferenced in the links.\n"},
  {"Initialize", PyvtkStaticCellLinks_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nMake sure any previously created links are cleaned up.\n"},
  {"Squeeze", PyvtkStaticCellLinks_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nReclaim any unused memory.\n"},
  {"Reset", PyvtkStaticCellLinks_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset() override;\n\nReset to a state of no entries without freeing the memory.\n"},
  {"GetActualMemorySize", PyvtkStaticCellLinks_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\nlinks array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkStaticCellLinks_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkAbstractCellLinks) -> None\nC++: void DeepCopy(vtkAbstractCellLinks *src) override;\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStaticCellLinks_Doc =
  "vtkStaticCellLinks - object represents upward pointers from points to\nlist of cells using each point\n\n"
  "Superclass: vtkAbstractCellLinks\n\n"
  "vtkStaticCellLinks is a supplemental object to vtkCellArray and\n"
  "vtkCellTypes, enabling access from points to the cells using the\n"
  "points. vtkStaticCellLinks is an array of links, each link represents\n"
  "a list of cell ids using a particular point. The information provided\n"
  "by this object can be used to determine cell neighbors and construct\n"
  "other local topological information. This class is a faster\n"
  "implementation of vtkCellLinks. However, it cannot be incrementally\n"
  "constructed; it is meant to be constructed once (statically) and must\n"
  "be rebuilt if the cells change.\n\n"
  "@warning\n"
  "This is a drop-in replacement for vtkCellLinks using static link\n"
  "construction. It uses the templated vtkStaticCellLinksTemplate class,\n"
  "instantiating vtkStaticCellLinksTemplate with a vtkIdType template\n"
  "parameter. Note that for best performance, the\n"
  "vtkStaticCellLinksTemplate class may be used directly, instantiating\n"
  "it with the appropriate id type. This class is also wrappable and can\n"
  "be used from an interpreted language such as Python.\n\n"
  "@sa\n"
  "vtkCellLinks vtkStaticCellLinksTemplate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStaticCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStaticCellLinks", // tp_name
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
  PyvtkStaticCellLinks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCellLinks_StaticNew()
{
  return vtkStaticCellLinks::New();
}

PyObject *PyvtkStaticCellLinks_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStaticCellLinks_Type, PyvtkStaticCellLinks_Methods,
    "vtkStaticCellLinks",
 &PyvtkStaticCellLinks_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLinks_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}

