// python wrapper for vtkGraphToPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphToPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphToPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphToPolyData_ClassNew(); }


static PyObject *
PyvtkGraphToPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphToPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphToPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphToPolyData *tempr = vtkGraphToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphToPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphToPolyData::NewInstance());

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
PyvtkGraphToPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphToPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphToPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_SetEdgeGlyphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeGlyphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeGlyphOutput(temp0);
    }
    else
    {
      op->vtkGraphToPolyData::SetEdgeGlyphOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_GetEdgeGlyphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeGlyphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeGlyphOutput() :
      op->vtkGraphToPolyData::GetEdgeGlyphOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_EdgeGlyphOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeGlyphOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeGlyphOutputOn();
    }
    else
    {
      op->vtkGraphToPolyData::EdgeGlyphOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_EdgeGlyphOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeGlyphOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeGlyphOutputOff();
    }
    else
    {
      op->vtkGraphToPolyData::EdgeGlyphOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_SetEdgeGlyphPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeGlyphPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeGlyphPosition(temp0);
    }
    else
    {
      op->vtkGraphToPolyData::SetEdgeGlyphPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_GetEdgeGlyphPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeGlyphPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeGlyphPosition() :
      op->vtkGraphToPolyData::GetEdgeGlyphPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphToPolyData_Methods[] = {
  {"IsTypeOf", PyvtkGraphToPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphToPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphToPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphToPolyData\nC++: static vtkGraphToPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphToPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphToPolyData\nC++: vtkGraphToPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphToPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphToPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEdgeGlyphOutput", PyvtkGraphToPolyData_SetEdgeGlyphOutput, METH_VARARGS,
   "SetEdgeGlyphOutput(self, _arg:bool) -> None\nC++: virtual void SetEdgeGlyphOutput(bool _arg)\n\nCreate a second output containing points and orientation vectors\nfor drawing arrows or other glyphs on edges.  This output should\nbe set as the first input to vtkGlyph3D to place glyphs on the\nedges. vtkGlyphSource2D's VTK_EDGEARROW_GLYPH provides a good\nglyph for drawing arrows. Default value is off.\n"},
  {"GetEdgeGlyphOutput", PyvtkGraphToPolyData_GetEdgeGlyphOutput, METH_VARARGS,
   "GetEdgeGlyphOutput(self) -> bool\nC++: virtual bool GetEdgeGlyphOutput()\n\n"},
  {"EdgeGlyphOutputOn", PyvtkGraphToPolyData_EdgeGlyphOutputOn, METH_VARARGS,
   "EdgeGlyphOutputOn(self) -> None\nC++: virtual void EdgeGlyphOutputOn()\n\n"},
  {"EdgeGlyphOutputOff", PyvtkGraphToPolyData_EdgeGlyphOutputOff, METH_VARARGS,
   "EdgeGlyphOutputOff(self) -> None\nC++: virtual void EdgeGlyphOutputOff()\n\n"},
  {"SetEdgeGlyphPosition", PyvtkGraphToPolyData_SetEdgeGlyphPosition, METH_VARARGS,
   "SetEdgeGlyphPosition(self, _arg:float) -> None\nC++: virtual void SetEdgeGlyphPosition(double _arg)\n\nThe position of the glyph point along the edge. 0 puts a glyph\npoint at the source of each edge. 1 puts a glyph point at the\ntarget of each edge. An intermediate value will place the glyph\npoint between the source and target. The default value is 1.\n"},
  {"GetEdgeGlyphPosition", PyvtkGraphToPolyData_GetEdgeGlyphPosition, METH_VARARGS,
   "GetEdgeGlyphPosition(self) -> float\nC++: virtual double GetEdgeGlyphPosition()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphToPolyData_Doc =
  "vtkGraphToPolyData - convert a vtkGraph to vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Converts a vtkGraph to a vtkPolyData.  This assumes that the points\n"
  "of the graph have already been filled (perhaps by vtkGraphLayout),\n"
  "and converts all the edge of the graph into lines in the polydata.\n"
  "The vertex data is passed along to the point data, and the edge data\n"
  "is passed along to the cell data.\n\n"
  "Only the owned graph edges (i.e. edges with ghost level 0) are copied\n"
  "into the vtkPolyData.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphToPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkGraphToPolyData", // tp_name
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
  PyvtkGraphToPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphToPolyData_StaticNew()
{
  return vtkGraphToPolyData::New();
}

PyObject *PyvtkGraphToPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphToPolyData_Type, PyvtkGraphToPolyData_Methods,
    "vtkGraphToPolyData",
 &PyvtkGraphToPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphToPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphToPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphToPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

