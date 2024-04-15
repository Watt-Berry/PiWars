// python wrapper for vtkHyperTreeGridEvaluateCoarse
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridEvaluateCoarse.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridEvaluateCoarse(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridEvaluateCoarse_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridEvaluateCoarse::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridEvaluateCoarse::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridEvaluateCoarse *tempr = vtkHyperTreeGridEvaluateCoarse::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridEvaluateCoarse *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridEvaluateCoarse::NewInstance());

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
PyvtkHyperTreeGridEvaluateCoarse_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridEvaluateCoarse::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridEvaluateCoarse::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_SetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperator(temp0);
    }
    else
    {
      op->vtkHyperTreeGridEvaluateCoarse::SetOperator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_GetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOperator() :
      op->vtkHyperTreeGridEvaluateCoarse::GetOperator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridEvaluateCoarse_SetDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridEvaluateCoarse *op = static_cast<vtkHyperTreeGridEvaluateCoarse *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefault(temp0);
    }
    else
    {
      op->vtkHyperTreeGridEvaluateCoarse::SetDefault(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridEvaluateCoarse_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridEvaluateCoarse_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridEvaluateCoarse_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridEvaluateCoarse_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridEvaluateCoarse\nC++: static vtkHyperTreeGridEvaluateCoarse *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridEvaluateCoarse_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridEvaluateCoarse\nC++: vtkHyperTreeGridEvaluateCoarse *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridEvaluateCoarse_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridEvaluateCoarse_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOperator", PyvtkHyperTreeGridEvaluateCoarse_SetOperator, METH_VARARGS,
   "SetOperator(self, _arg:int) -> None\nC++: virtual void SetOperator(unsigned int _arg)\n\nSet/Get operator\n"},
  {"GetOperator", PyvtkHyperTreeGridEvaluateCoarse_GetOperator, METH_VARARGS,
   "GetOperator(self) -> int\nC++: virtual unsigned int GetOperator()\n\n"},
  {"SetDefault", PyvtkHyperTreeGridEvaluateCoarse_SetDefault, METH_VARARGS,
   "SetDefault(self, _arg:float) -> None\nC++: virtual void SetDefault(double _arg)\n\nSet/Get operator\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridEvaluateCoarse_Doc =
  "vtkHyperTreeGridEvaluateCoarse - The value of the parent cell is\ndetermined from an operation defined on the values of the child cells.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridEvaluateCoarse is a filter that takes as input an\n"
  "hypertree grid. The value of the parent cell (coarse) is determined\n"
  "from an operation defined on the values of the child cells (refined\n"
  "cell).\n\n"
  "The predefined operators are :\n"
  "- OPERATOR_DON_T_CHANGE_FAST: Operator does not change coarse value\n"
  "  (default), just shallow copy\n"
  "- OPERATOR_DON_T_CHANGE: Operator does not change coarse value but\n"
  "  iterate over all cells, just shallow copy\n"
  "- OPERATOR_MIN: The littlest value of the unmasked child cells\n"
  "- OPERATOR_MAX: The biggest value of the unmasked child cells\n"
  "- OPERATOR_SUM: The sum of the values of the unmasked child cells\n"
  "- OPERATOR_AVERAGE: The average of the values of the child cells. If\n"
  "  the cell is masked a value is put at \"default value\" (default value\n"
  "= 0 if not set by SetDefault).\n"
  "- OPERATOR_UNMASKED_AVERAGE: The average of the values of the\n"
  "  unmasked child cells\n"
  "- OPERATOR_ELDER_CHILD: Operator puts the value of the first child\n"
  "  (elder child)\n"
  "- OPERATOR_SPLATTING_AVERAGE: The splatting average of the values of\n"
  "  the child cells. If the cell is masked a value is put at \"default\n"
  "  value\" (default value = 0 if not set by SetDefault). The\n"
  "  calculation of the average should normally be done by dividing by\n"
  "  the number of children (GetNumberOfChildren) which is worth f^d\n"
  "  where f, refinement factor and d, number of spatial dimension. In\n"
  "  the calculation of the mean for splatting, the division involves\n"
  "  f^(d-1). In 3D, if a mesh is refined into 8 child cells each having\n"
  "a value set to 0.5, all these children produce 4 splats of value 1.\n"
  "  In fact, the value of the expected splat at the coarse cell\n"
  "  (parent) is 1. But a standard average will give 0.5 (value / f^d).\n"
  "  This is why the calculation of the average for splatting is\n"
  "  different (value / f^(d-1)).\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien, 2016-18 This class was modified to take in\n"
  "account the field values with components different of one, by Florent\n"
  "Denef, 2019 This work was supported by Commissariat a l'Energie\n"
  "Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridEvaluateCoarse_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridEvaluateCoarse", // tp_name
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
  PyvtkHyperTreeGridEvaluateCoarse_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridEvaluateCoarse_StaticNew()
{
  return vtkHyperTreeGridEvaluateCoarse::New();
}

PyObject *PyvtkHyperTreeGridEvaluateCoarse_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridEvaluateCoarse_Type, PyvtkHyperTreeGridEvaluateCoarse_Methods,
    "vtkHyperTreeGridEvaluateCoarse",
 &PyvtkHyperTreeGridEvaluateCoarse_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "OPERATOR_DON_T_CHANGE_FAST", vtkHyperTreeGridEvaluateCoarse::OPERATOR_DON_T_CHANGE_FAST },
        { "OPERATOR_DON_T_CHANGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_DON_T_CHANGE },
        { "OPERATOR_MIN", vtkHyperTreeGridEvaluateCoarse::OPERATOR_MIN },
        { "OPERATOR_MAX", vtkHyperTreeGridEvaluateCoarse::OPERATOR_MAX },
        { "OPERATOR_SUM", vtkHyperTreeGridEvaluateCoarse::OPERATOR_SUM },
        { "OPERATOR_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_AVERAGE },
        { "OPERATOR_UNMASKED_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_UNMASKED_AVERAGE },
        { "OPERATOR_ELDER_CHILD", vtkHyperTreeGridEvaluateCoarse::OPERATOR_ELDER_CHILD },
        { "OPERATOR_SPLATTING_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_SPLATTING_AVERAGE },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridEvaluateCoarse(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridEvaluateCoarse_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridEvaluateCoarse", o) != 0)
  {
    Py_DECREF(o);
  }

}

