// python wrapper for vtkRemovePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRemovePolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRemovePolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkRemovePolyData_ClassNew(); }


static PyObject *
PyvtkRemovePolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRemovePolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRemovePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRemovePolyData *tempr = vtkRemovePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRemovePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRemovePolyData::NewInstance());

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
PyvtkRemovePolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRemovePolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRemovePolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputData(temp0);
    }
    else
    {
      op->vtkRemovePolyData::RemoveInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkRemovePolyData::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRemovePolyData_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkRemovePolyData::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRemovePolyData_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRemovePolyData_GetInput_s1(self, args);
    case 0:
      return PyvtkRemovePolyData_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkRemovePolyData_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellIds(temp0);
    }
    else
    {
      op->vtkRemovePolyData::SetCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_GetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetCellIds() :
      op->vtkRemovePolyData::GetCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkRemovePolyData::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkRemovePolyData::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_SetExactMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExactMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExactMatch(temp0);
    }
    else
    {
      op->vtkRemovePolyData::SetExactMatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_GetExactMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExactMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExactMatch() :
      op->vtkRemovePolyData::GetExactMatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_ExactMatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactMatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactMatchOn();
    }
    else
    {
      op->vtkRemovePolyData::ExactMatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemovePolyData_ExactMatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactMatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemovePolyData *op = static_cast<vtkRemovePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactMatchOff();
    }
    else
    {
      op->vtkRemovePolyData::ExactMatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRemovePolyData_Methods[] = {
  {"IsTypeOf", PyvtkRemovePolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRemovePolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRemovePolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRemovePolyData\nC++: static vtkRemovePolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRemovePolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRemovePolyData\nC++: vtkRemovePolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRemovePolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRemovePolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveInputData", PyvtkRemovePolyData_RemoveInputData, METH_VARARGS,
   "RemoveInputData(self, __a:vtkPolyData) -> None\nC++: void RemoveInputData(vtkPolyData *)\n\nRemove a vtkPolyData dataset from the list of data.\n"},
  {"GetInput", PyvtkRemovePolyData_GetInput, METH_VARARGS,
   "GetInput(self, idx:int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int idx)\nGetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet any input of this filter.\n"},
  {"SetCellIds", PyvtkRemovePolyData_SetCellIds, METH_VARARGS,
   "SetCellIds(self, __a:vtkIdTypeArray) -> None\nC++: void SetCellIds(vtkIdTypeArray *)\n\nSet/Get the list of cell ids to delete. These are cell ids of the\ninput polydata - note that polydata with mixed cell types (e.g.,\nverts, lines, polys, and/or strips), the cell ids begin with the\nvertex cells, then line cells, then polygonal cells, and finally\ntriangle strips.\n"},
  {"GetCellIds", PyvtkRemovePolyData_GetCellIds, METH_VARARGS,
   "GetCellIds(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetCellIds()\n\n"},
  {"SetPointIds", PyvtkRemovePolyData_SetPointIds, METH_VARARGS,
   "SetPointIds(self, __a:vtkIdTypeArray) -> None\nC++: void SetPointIds(vtkIdTypeArray *)\n\nSet/Get the list of points ids to delete. Any cells using any of\nthe points listed are removed.\n"},
  {"GetPointIds", PyvtkRemovePolyData_GetPointIds, METH_VARARGS,
   "GetPointIds(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetPointIds()\n\n"},
  {"SetExactMatch", PyvtkRemovePolyData_SetExactMatch, METH_VARARGS,
   "SetExactMatch(self, _arg:bool) -> None\nC++: virtual void SetExactMatch(bool _arg)\n\nExactMatch controls how the matching of cells when additional\ninput vtkPolyDatas are provided. When ExactMatch is enabled, then\nif any input0 cell Ci uses all of the point ids in cells\nspecified in inputs [1,N) Cn, and the number of point ids in Ci\n== Cn, then a match occurs and the cell is marked for deletion.\nWithout ExactMatch enabled, if Ci uses all of the points in Cn,\neven though the cell connectivity list sizes are not the same\nsize, a match occurs. This can be used to perform tricks like\nmarking all of the cells that use a point or edge to be deleted.\nExactMatch is disabled by default since it takes a extra\ncomputation time.\n"},
  {"GetExactMatch", PyvtkRemovePolyData_GetExactMatch, METH_VARARGS,
   "GetExactMatch(self) -> bool\nC++: virtual bool GetExactMatch()\n\n"},
  {"ExactMatchOn", PyvtkRemovePolyData_ExactMatchOn, METH_VARARGS,
   "ExactMatchOn(self) -> None\nC++: virtual void ExactMatchOn()\n\n"},
  {"ExactMatchOff", PyvtkRemovePolyData_ExactMatchOff, METH_VARARGS,
   "ExactMatchOff(self) -> None\nC++: virtual void ExactMatchOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRemovePolyData_Doc =
  "vtkRemovePolyData - Removes vtkPolyData cells from an input\nvtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRemovePolyData is a filter that removes cells from an input\n"
  "vtkPolyData (defined in the first input #0), and produces an output\n"
  "vtkPolyData (which may be empty).  The cells to remove are specified\n"
  "in the following ways:\n"
  "1) a list of cell ids can be provided; 2) a list of point ids can be\n"
  "   provided - any cell using one or more of the points indicated is\n"
  "   removed; and 3) one or more additional vtkPolyData inputs can be\n"
  "   provided - matching cells are deleted. These three methods can be\n"
  "   used in combination if desired. Point and cell attribute data\n"
  "   associated with the remaining cells are copied to the output.\n\n"
  "@warning\n"
  "The filter vtkAppendPolyData enables appending multiple input\n"
  "vtkPolyData's together. So vtkAppendPolyData functions as an\n"
  "approximate inverse operation to vtkRemovePolyData.\n\n"
  "@warning\n"
  "The output point type is the same as the (first) input point type.\n\n"
  "@sa\n"
  "vtkAppendPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRemovePolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkRemovePolyData", // tp_name
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
  PyvtkRemovePolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRemovePolyData_StaticNew()
{
  return vtkRemovePolyData::New();
}

PyObject *PyvtkRemovePolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRemovePolyData_Type, PyvtkRemovePolyData_Methods,
    "vtkRemovePolyData",
 &PyvtkRemovePolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRemovePolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRemovePolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRemovePolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

