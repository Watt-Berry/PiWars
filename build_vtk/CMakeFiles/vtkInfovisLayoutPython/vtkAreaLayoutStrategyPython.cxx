// python wrapper for vtkAreaLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAreaLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAreaLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkAreaLayoutStrategy_ClassNew(); }


static PyObject *
PyvtkAreaLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAreaLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAreaLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAreaLayoutStrategy *tempr = vtkAreaLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAreaLayoutStrategy::NewInstance());

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
PyvtkAreaLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAreaLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAreaLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    op->Layout(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_LayoutEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LayoutEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkTree *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->LayoutEdgePoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAreaLayoutStrategy::LayoutEdgePoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  const size_t size2 = 2;
  float temp2[2];
  float save2[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = op->FindVertex(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkPercentage(temp0);
    }
    else
    {
      op->vtkAreaLayoutStrategy::SetShrinkPercentage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentageMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentageMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkPercentageMinValue() :
      op->vtkAreaLayoutStrategy::GetShrinkPercentageMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentageMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentageMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkPercentageMaxValue() :
      op->vtkAreaLayoutStrategy::GetShrinkPercentageMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkPercentage() :
      op->vtkAreaLayoutStrategy::GetShrinkPercentage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAreaLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkAreaLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAreaLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAreaLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAreaLayoutStrategy\nC++: static vtkAreaLayoutStrategy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAreaLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAreaLayoutStrategy\nC++: vtkAreaLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAreaLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAreaLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Layout", PyvtkAreaLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self, inputTree:vtkTree, areaArray:vtkDataArray,\n    sizeArray:vtkDataArray) -> None\nC++: virtual void Layout(vtkTree *inputTree,\n    vtkDataArray *areaArray, vtkDataArray *sizeArray)\n\nPerform the layout of the input tree, and store the sector bounds\nof each vertex as a tuple in a data array. For radial layout,\nthis is (innerRadius, outerRadius, startAngle, endAngle). For\nrectangular layout, this is (xmin, xmax, ymin, ymax).\n\n* The sizeArray may be nullptr, or may contain the desired\n* size of each vertex in the tree.\n"},
  {"LayoutEdgePoints", PyvtkAreaLayoutStrategy_LayoutEdgePoints, METH_VARARGS,
   "LayoutEdgePoints(self, inputTree:vtkTree, areaArray:vtkDataArray,\n    sizeArray:vtkDataArray, edgeRoutingTree:vtkTree) -> None\nC++: virtual void LayoutEdgePoints(vtkTree *inputTree,\n    vtkDataArray *areaArray, vtkDataArray *sizeArray,\n    vtkTree *edgeRoutingTree)\n\n"},
  {"FindVertex", PyvtkAreaLayoutStrategy_FindVertex, METH_VARARGS,
   "FindVertex(self, tree:vtkTree, array:vtkDataArray, pnt:[float,\n    float]) -> int\nC++: virtual vtkIdType FindVertex(vtkTree *tree,\n    vtkDataArray *array, float pnt[2])\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit)\n"},
  {"SetShrinkPercentage", PyvtkAreaLayoutStrategy_SetShrinkPercentage, METH_VARARGS,
   "SetShrinkPercentage(self, _arg:float) -> None\nC++: virtual void SetShrinkPercentage(double _arg)\n\nThe amount that the regions are shrunk as a value from 0.0 (full\nsize) to 1.0 (shrink to nothing).\n"},
  {"GetShrinkPercentageMinValue", PyvtkAreaLayoutStrategy_GetShrinkPercentageMinValue, METH_VARARGS,
   "GetShrinkPercentageMinValue(self) -> float\nC++: virtual double GetShrinkPercentageMinValue()\n\nThe amount that the regions are shrunk as a value from 0.0 (full\nsize) to 1.0 (shrink to nothing).\n"},
  {"GetShrinkPercentageMaxValue", PyvtkAreaLayoutStrategy_GetShrinkPercentageMaxValue, METH_VARARGS,
   "GetShrinkPercentageMaxValue(self) -> float\nC++: virtual double GetShrinkPercentageMaxValue()\n\nThe amount that the regions are shrunk as a value from 0.0 (full\nsize) to 1.0 (shrink to nothing).\n"},
  {"GetShrinkPercentage", PyvtkAreaLayoutStrategy_GetShrinkPercentage, METH_VARARGS,
   "GetShrinkPercentage(self) -> float\nC++: virtual double GetShrinkPercentage()\n\nThe amount that the regions are shrunk as a value from 0.0 (full\nsize) to 1.0 (shrink to nothing).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAreaLayoutStrategy_Doc =
  "vtkAreaLayoutStrategy - abstract superclass for all area layout\nstrategies\n\n"
  "Superclass: vtkObject\n\n"
  "All subclasses of this class perform a area layout on a tree. This\n"
  "involves assigning a region to each vertex in the tree, and placing\n"
  "that information in a data array with four components per tuple\n"
  "representing (innerRadius, outerRadius, startAngle, endAngle).\n\n"
  "Instances of subclasses of this class may be assigned as the layout\n"
  "strategy to vtkAreaLayout\n\n"
  "@par Thanks: Thanks to Jason Shepherd from Sandia National\n"
  "Laboratories for help developing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAreaLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkAreaLayoutStrategy", // tp_name
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
  PyvtkAreaLayoutStrategy_Doc, // tp_doc
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

PyObject *PyvtkAreaLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAreaLayoutStrategy_Type, PyvtkAreaLayoutStrategy_Methods,
    "vtkAreaLayoutStrategy",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAreaLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAreaLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAreaLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

