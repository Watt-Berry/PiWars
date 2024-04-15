// python wrapper for vtkTreeMapToPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeMapToPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeMapToPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeMapToPolyData_ClassNew(); }


static PyObject *
PyvtkTreeMapToPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeMapToPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeMapToPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeMapToPolyData *tempr = vtkTreeMapToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapToPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeMapToPolyData::NewInstance());

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
PyvtkTreeMapToPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeMapToPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeMapToPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetRectanglesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRectanglesArrayName(temp0);
    }
    else
    {
      op->vtkTreeMapToPolyData::SetRectanglesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetLevelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelArrayName(temp0);
    }
    else
    {
      op->vtkTreeMapToPolyData::SetLevelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_GetLevelDeltaZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelDeltaZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelDeltaZ() :
      op->vtkTreeMapToPolyData::GetLevelDeltaZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetLevelDeltaZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelDeltaZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelDeltaZ(temp0);
    }
    else
    {
      op->vtkTreeMapToPolyData::SetLevelDeltaZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_GetAddNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddNormals() :
      op->vtkTreeMapToPolyData::GetAddNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetAddNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddNormals(temp0);
    }
    else
    {
      op->vtkTreeMapToPolyData::SetAddNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkTreeMapToPolyData::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeMapToPolyData_Methods[] = {
  {"IsTypeOf", PyvtkTreeMapToPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeMapToPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeMapToPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeMapToPolyData\nC++: static vtkTreeMapToPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeMapToPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeMapToPolyData\nC++: vtkTreeMapToPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeMapToPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeMapToPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRectanglesArrayName", PyvtkTreeMapToPolyData_SetRectanglesArrayName, METH_VARARGS,
   "SetRectanglesArrayName(self, name:str) -> None\nC++: virtual void SetRectanglesArrayName(const char *name)\n\nThe field containing quadruples of the form (min x, max x, min y,\nmax y) representing the bounds of the rectangles for each vertex.\nThis array may be added to the tree using vtkTreeMapLayout.\n"},
  {"SetLevelArrayName", PyvtkTreeMapToPolyData_SetLevelArrayName, METH_VARARGS,
   "SetLevelArrayName(self, name:str) -> None\nC++: virtual void SetLevelArrayName(const char *name)\n\nThe field containing the level of each tree node. This can be\nadded using vtkTreeLevelsFilter before this filter. If this is\nnot present, the filter simply calls tree->GetLevel(v) for each\nvertex, which will produce the same result, but may not be as\nefficient.\n"},
  {"GetLevelDeltaZ", PyvtkTreeMapToPolyData_GetLevelDeltaZ, METH_VARARGS,
   "GetLevelDeltaZ(self) -> float\nC++: virtual double GetLevelDeltaZ()\n\nThe spacing along the z-axis between tree map levels.\n"},
  {"SetLevelDeltaZ", PyvtkTreeMapToPolyData_SetLevelDeltaZ, METH_VARARGS,
   "SetLevelDeltaZ(self, _arg:float) -> None\nC++: virtual void SetLevelDeltaZ(double _arg)\n\n"},
  {"GetAddNormals", PyvtkTreeMapToPolyData_GetAddNormals, METH_VARARGS,
   "GetAddNormals(self) -> bool\nC++: virtual bool GetAddNormals()\n\nThe spacing along the z-axis between tree map levels.\n"},
  {"SetAddNormals", PyvtkTreeMapToPolyData_SetAddNormals, METH_VARARGS,
   "SetAddNormals(self, _arg:bool) -> None\nC++: virtual void SetAddNormals(bool _arg)\n\n"},
  {"FillInputPortInformation", PyvtkTreeMapToPolyData_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeMapToPolyData_Doc =
  "vtkTreeMapToPolyData - converts a tree to a polygonal data\nrepresenting a tree map\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This algorithm requires that the vtkTreeMapLayout filter has already\n"
  "applied to the data in order to create the quadruple array (min x,\n"
  "max x, min y, max y) of bounds for each vertex of the tree.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeMapToPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkTreeMapToPolyData", // tp_name
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
  PyvtkTreeMapToPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeMapToPolyData_StaticNew()
{
  return vtkTreeMapToPolyData::New();
}

PyObject *PyvtkTreeMapToPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeMapToPolyData_Type, PyvtkTreeMapToPolyData_Methods,
    "vtkTreeMapToPolyData",
 &PyvtkTreeMapToPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeMapToPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeMapToPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeMapToPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

