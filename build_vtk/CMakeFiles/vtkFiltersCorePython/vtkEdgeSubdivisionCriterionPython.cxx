// python wrapper for vtkEdgeSubdivisionCriterion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEdgeSubdivisionCriterion.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *dict); }
extern "C" { PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew(); }


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEdgeSubdivisionCriterion::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEdgeSubdivisionCriterion *tempr = vtkEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeSubdivisionCriterion::NewInstance());

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
PyvtkEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_EvaluateLocationAndFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocationAndFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = op->EvaluateLocationAndFields(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_PassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  int temp1;
  vtkStreamingTessellator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkStreamingTessellator"))
  {
    int tempr = (ap.IsBound() ?
      op->PassField(temp0, temp1, temp2) :
      op->vtkEdgeSubdivisionCriterion::PassField(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_ResetFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFieldList();
    }
    else
    {
      op->vtkEdgeSubdivisionCriterion::ResetFieldList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_DontPassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DontPassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  vtkStreamingTessellator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStreamingTessellator"))
  {
    bool tempr = (ap.IsBound() ?
      op->DontPassField(temp0, temp1) :
      op->vtkEdgeSubdivisionCriterion::DontPassField(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldIds() :
      op->vtkEdgeSubdivisionCriterion::GetFieldIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldOffsets() :
      op->vtkEdgeSubdivisionCriterion::GetFieldOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputField(temp0) :
      op->vtkEdgeSubdivisionCriterion::GetOutputField(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkEdgeSubdivisionCriterion::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEdgeSubdivisionCriterion_Methods[] = {
  {"IsTypeOf", PyvtkEdgeSubdivisionCriterion_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEdgeSubdivisionCriterion\nC++: static vtkEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEdgeSubdivisionCriterion\nC++: vtkEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateLocationAndFields", PyvtkEdgeSubdivisionCriterion_EvaluateLocationAndFields, METH_VARARGS,
   "EvaluateLocationAndFields(self, p1:[float, ...], field_start:int)\n    -> bool\nC++: virtual bool EvaluateLocationAndFields(double *p1,\n    int field_start)\n\nYou must implement this member function in a subclass. It will be\ncalled by vtkStreamingTessellator for each edge in each primitive\nthat vtkStreamingTessellator generates.\n"},
  {"PassField", PyvtkEdgeSubdivisionCriterion_PassField, METH_VARARGS,
   "PassField(self, sourceId:int, sourceSize:int,\n    t:vtkStreamingTessellator) -> int\nC++: virtual int PassField(int sourceId, int sourceSize,\n    vtkStreamingTessellator *t)\n\nThis is a helper routine called by PassFields() which you may\nalso call directly; it adds sourceSize to the size of the output\nvertex field values. The offset of the sourceId field in the\noutput vertex array is returned.\n-1 is returned if sourceSize would force the output to have more\n   than vtkStreamingTessellator::MaxFieldSize field values per\n   vertex.\n"},
  {"ResetFieldList", PyvtkEdgeSubdivisionCriterion_ResetFieldList, METH_VARARGS,
   "ResetFieldList(self) -> None\nC++: virtual void ResetFieldList()\n\nDon't pass any field values in the vertex pointer. This is used\nto reset the list of fields to pass after a successful run of\nvtkStreamingTessellator.\n"},
  {"DontPassField", PyvtkEdgeSubdivisionCriterion_DontPassField, METH_VARARGS,
   "DontPassField(self, sourceId:int, t:vtkStreamingTessellator)\n    -> bool\nC++: virtual bool DontPassField(int sourceId,\n    vtkStreamingTessellator *t)\n\nThis does the opposite of PassField(); it removes a field from\nthe output (assuming the field was set to be passed). Returns\ntrue if any action was taken, false otherwise.\n"},
  {"GetFieldIds", PyvtkEdgeSubdivisionCriterion_GetFieldIds, METH_VARARGS,
   "GetFieldIds(self) -> Pointer\nC++: const int *GetFieldIds()\n\nReturn the map from output field id to input field ids. That is,\nfield i of any output vertex from vtkStreamingTessellator will be\nassociated with GetFieldIds()[ i] on the input mesh.\n"},
  {"GetFieldOffsets", PyvtkEdgeSubdivisionCriterion_GetFieldOffsets, METH_VARARGS,
   "GetFieldOffsets(self) -> Pointer\nC++: const int *GetFieldOffsets()\n\nReturn the offset into an output vertex array of all fields. That\nis, field i of any output vertex, p, from vtkStreamingTessellator\nwill have its first entry at p[ GetFieldOffsets()[ i] ] .\n"},
  {"GetOutputField", PyvtkEdgeSubdivisionCriterion_GetOutputField, METH_VARARGS,
   "GetOutputField(self, fieldId:int) -> int\nC++: int GetOutputField(int fieldId)\n\nReturn the output ID of an input field. Returns -1 if fieldId is\nnot set to be passed to the output.\n"},
  {"GetNumberOfFields", PyvtkEdgeSubdivisionCriterion_GetNumberOfFields, METH_VARARGS,
   "GetNumberOfFields(self) -> int\nC++: int GetNumberOfFields()\n\nReturn the number of fields being evaluated at each output\nvertex. This is the length of the arrays returned by\nGetFieldIds() andGetFieldOffsets().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEdgeSubdivisionCriterion_Doc =
  "vtkEdgeSubdivisionCriterion - how to decide whether a linear\napproximation to nonlinear geometry or field should be subdivided\n\n"
  "Superclass: vtkObject\n\n"
  "Descendants of this abstract class are used to decide whether a\n"
  "piecewise linear approximation (triangles, lines, ... ) to some\n"
  "nonlinear geometry should be subdivided. This decision may be based\n"
  "on an absolute error metric (chord error) or on some view-dependent\n"
  "metric (chord error compared to device resolution) or on some\n"
  "abstract metric (color error). Or anything else, really. Just so long\n"
  "as you implement the EvaluateLocationAndFields member, all will be\n"
  "well.\n\n"
  "@sa\n"
  "vtkDataSetSubdivisionAlgorithm vtkStreamingTessellator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEdgeSubdivisionCriterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkEdgeSubdivisionCriterion", // tp_name
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
  PyvtkEdgeSubdivisionCriterion_Doc, // tp_doc
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

PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEdgeSubdivisionCriterion_Type, PyvtkEdgeSubdivisionCriterion_Methods,
    "vtkEdgeSubdivisionCriterion",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEdgeSubdivisionCriterion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEdgeSubdivisionCriterion_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEdgeSubdivisionCriterion", o) != 0)
  {
    Py_DECREF(o);
  }

}

