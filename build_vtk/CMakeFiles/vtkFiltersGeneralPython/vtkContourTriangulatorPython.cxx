// python wrapper for vtkContourTriangulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContourTriangulator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourTriangulator(PyObject *dict); }
extern "C" { PyObject *PyvtkContourTriangulator_ClassNew(); }


static PyObject *
PyvtkContourTriangulator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourTriangulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourTriangulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourTriangulator *tempr = vtkContourTriangulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourTriangulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourTriangulator::NewInstance());

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
PyvtkContourTriangulator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContourTriangulator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContourTriangulator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetTriangulationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationError() :
      op->vtkContourTriangulator::GetTriangulationError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationErrorDisplay(temp0);
    }
    else
    {
      op->vtkContourTriangulator::SetTriangulationErrorDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOn();
    }
    else
    {
      op->vtkContourTriangulator::TriangulationErrorDisplayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOff();
    }
    else
    {
      op->vtkContourTriangulator::TriangulationErrorDisplayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkContourTriangulator::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulatePolygon(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulatePolygon");

  vtkIdList *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    int tempr = vtkContourTriangulator::TriangulatePolygon(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulateContours(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulateContours");

  vtkPolyData *temp0 = nullptr;
  long long temp1;
  long long temp2;
  vtkCellArray *temp3 = nullptr;
  const size_t size4 = 3;
  double temp4[3];
  vtkPolyDataAlgorithm *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetArray(temp4, size4) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkPolyDataAlgorithm")))
  {
    int tempr = vtkContourTriangulator::TriangulateContours(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourTriangulator_Methods[] = {
  {"IsTypeOf", PyvtkContourTriangulator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourTriangulator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourTriangulator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContourTriangulator\nC++: static vtkContourTriangulator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourTriangulator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContourTriangulator\nC++: vtkContourTriangulator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContourTriangulator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContourTriangulator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetTriangulationError", PyvtkContourTriangulator_GetTriangulationError, METH_VARARGS,
   "GetTriangulationError(self) -> int\nC++: virtual int GetTriangulationError()\n\nCheck if there was a triangulation failure in the last update.\n"},
  {"SetTriangulationErrorDisplay", PyvtkContourTriangulator_SetTriangulationErrorDisplay, METH_VARARGS,
   "SetTriangulationErrorDisplay(self, _arg:int) -> None\nC++: virtual void SetTriangulationErrorDisplay(vtkTypeBool _arg)\n\nGenerate errors when the triangulation fails.  Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {"TriangulationErrorDisplayOn", PyvtkContourTriangulator_TriangulationErrorDisplayOn, METH_VARARGS,
   "TriangulationErrorDisplayOn(self) -> None\nC++: virtual void TriangulationErrorDisplayOn()\n\n"},
  {"TriangulationErrorDisplayOff", PyvtkContourTriangulator_TriangulationErrorDisplayOff, METH_VARARGS,
   "TriangulationErrorDisplayOff(self) -> None\nC++: virtual void TriangulationErrorDisplayOff()\n\n"},
  {"GetTriangulationErrorDisplay", PyvtkContourTriangulator_GetTriangulationErrorDisplay, METH_VARARGS,
   "GetTriangulationErrorDisplay(self) -> int\nC++: virtual vtkTypeBool GetTriangulationErrorDisplay()\n\n"},
  {"TriangulatePolygon", PyvtkContourTriangulator_TriangulatePolygon, METH_VARARGS,
   "TriangulatePolygon(polygon:vtkIdList, points:vtkPoints,\n    triangles:vtkCellArray) -> int\nC++: static int TriangulatePolygon(vtkIdList *polygon,\n    vtkPoints *points, vtkCellArray *triangles)\n\nA robust method for triangulating a polygon.  It cleans up the\npolygon and then applies the ear-cut triangulation.  A zero\nreturn value indicates that triangulation failed.\n"},
  {"TriangulateContours", PyvtkContourTriangulator_TriangulateContours, METH_VARARGS,
   "TriangulateContours(data:vtkPolyData, firstLine:int, numLines:int,\n     outputPolys:vtkCellArray, normal:(float, float, float),\n    self_:vtkPolyDataAlgorithm=...) -> int\nC++: static int TriangulateContours(vtkPolyData *data,\n    vtkIdType firstLine, vtkIdType numLines,\n    vtkCellArray *outputPolys, const double normal[3],\n    vtkPolyDataAlgorithm *self=nullptr)\n\nGiven some closed contour lines, create a triangle mesh that\nfills those lines.  The input lines do not have to be in\ntail-to-tip order. Only numLines starting from firstLine will be\nused.  Note that holes can be indicated by contour loops whose\nnormals are in the opposite direction to the provided normal.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContourTriangulator_Doc =
  "vtkContourTriangulator - Fill all 2D contours to create polygons\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkContourTriangulator will generate triangles to fill all of the 2D\n"
  "contours in its input. The input to the filter is a set of lines (not\n"
  "polylines) which when joined form loops. The contours may be concave,\n"
  "and may even contain holes i.e. a contour may contain an internal\n"
  "contour that is wound in the opposite direction (as compared to the\n"
  "outer polygon normal) to indicate that it is a hole.\n\n"
  "@warning\n"
  "The triangulation of is done in O(n) time for simple convex inputs,\n"
  "but for non-convex inputs the worst-case time is O(n^2*m^2) where n\n"
  "is the number of points and m is the number of holes. The best\n"
  "triangulation algorithms, in contrast, are O(n log n). The resulting\n"
  "triangles may be quite narrow, the algorithm does not attempt to\n"
  "produce high-quality triangles.\n\n"
  "@sa\n"
  "vtkClipClosedSurface vtkPolygon\n\n"
  "@par Thanks: Thanks to David Gobbi for contributing this class to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourTriangulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkContourTriangulator", // tp_name
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
  PyvtkContourTriangulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContourTriangulator_StaticNew()
{
  return vtkContourTriangulator::New();
}

PyObject *PyvtkContourTriangulator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContourTriangulator_Type, PyvtkContourTriangulator_Methods,
    "vtkContourTriangulator",
 &PyvtkContourTriangulator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourTriangulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourTriangulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourTriangulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

