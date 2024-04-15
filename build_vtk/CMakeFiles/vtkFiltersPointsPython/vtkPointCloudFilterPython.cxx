// python wrapper for vtkPointCloudFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointCloudFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointCloudFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }


static PyObject *
PyvtkPointCloudFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointCloudFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointCloudFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointCloudFilter *tempr = vtkPointCloudFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointCloudFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointCloudFilter::NewInstance());

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
PyvtkPointCloudFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointCloudFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointCloudFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GetPointMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const long long *tempr = (ap.IsBound() ?
      op->GetPointMap() :
      op->vtkPointCloudFilter::GetPointMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GetNumberOfPointsRemoved(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsRemoved");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPointsRemoved() :
      op->vtkPointCloudFilter::GetNumberOfPointsRemoved());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_SetGenerateOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOutliers(temp0);
    }
    else
    {
      op->vtkPointCloudFilter::SetGenerateOutliers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GetGenerateOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOutliers() :
      op->vtkPointCloudFilter::GetGenerateOutliers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GenerateOutliersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutliersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutliersOn();
    }
    else
    {
      op->vtkPointCloudFilter::GenerateOutliersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GenerateOutliersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutliersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutliersOff();
    }
    else
    {
      op->vtkPointCloudFilter::GenerateOutliersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertices(temp0);
    }
    else
    {
      op->vtkPointCloudFilter::SetGenerateVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkPointCloudFilter::GetGenerateVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOn();
    }
    else
    {
      op->vtkPointCloudFilter::GenerateVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudFilter_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudFilter *op = static_cast<vtkPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOff();
    }
    else
    {
      op->vtkPointCloudFilter::GenerateVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointCloudFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointCloudFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointCloudFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointCloudFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointCloudFilter\nC++: static vtkPointCloudFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointCloudFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointCloudFilter\nC++: vtkPointCloudFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointCloudFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointCloudFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPointMap", PyvtkPointCloudFilter_GetPointMap, METH_VARARGS,
   "GetPointMap(self) -> Pointer\nC++: const vtkIdType *GetPointMap()\n\nRetrieve a map which indicates, on a point-by-point basis, where\neach input point was placed into the output. In other words,\nmap[i] indicates where the ith input point is located in the\noutput array of points. If map[i] < 0, then the ith input point\nwas removed during filter execution.  This method returns valid\ninformation only after the filter executes.\n"},
  {"GetNumberOfPointsRemoved", PyvtkPointCloudFilter_GetNumberOfPointsRemoved, METH_VARARGS,
   "GetNumberOfPointsRemoved(self) -> int\nC++: vtkIdType GetNumberOfPointsRemoved()\n\nReturn the number of points removed after filter execution. The\ninformation returned is valid only after the filter executes.\n"},
  {"SetGenerateOutliers", PyvtkPointCloudFilter_SetGenerateOutliers, METH_VARARGS,
   "SetGenerateOutliers(self, _arg:bool) -> None\nC++: virtual void SetGenerateOutliers(bool _arg)\n\nIf this method is enabled (true), then a second output will be\ncreated that contains the outlier points. By default this is off\n(false).  Note that if enabled, the PointMap is modified as well:\nthe outlier points are listed as well, with similar meaning,\nexcept their value is negated and shifted by -1.\n"},
  {"GetGenerateOutliers", PyvtkPointCloudFilter_GetGenerateOutliers, METH_VARARGS,
   "GetGenerateOutliers(self) -> bool\nC++: virtual bool GetGenerateOutliers()\n\n"},
  {"GenerateOutliersOn", PyvtkPointCloudFilter_GenerateOutliersOn, METH_VARARGS,
   "GenerateOutliersOn(self) -> None\nC++: virtual void GenerateOutliersOn()\n\n"},
  {"GenerateOutliersOff", PyvtkPointCloudFilter_GenerateOutliersOff, METH_VARARGS,
   "GenerateOutliersOff(self) -> None\nC++: virtual void GenerateOutliersOff()\n\n"},
  {"SetGenerateVertices", PyvtkPointCloudFilter_SetGenerateVertices, METH_VARARGS,
   "SetGenerateVertices(self, _arg:bool) -> None\nC++: virtual void SetGenerateVertices(bool _arg)\n\nIf this method is enabled (true), then the outputs will contain a\nvertex cells (i.e., a vtkPolyVertex for each output). This takes\na lot more memory but some VTK filters need cells to function\nproperly. By default this is off (false).\n"},
  {"GetGenerateVertices", PyvtkPointCloudFilter_GetGenerateVertices, METH_VARARGS,
   "GetGenerateVertices(self) -> bool\nC++: virtual bool GetGenerateVertices()\n\n"},
  {"GenerateVerticesOn", PyvtkPointCloudFilter_GenerateVerticesOn, METH_VARARGS,
   "GenerateVerticesOn(self) -> None\nC++: virtual void GenerateVerticesOn()\n\n"},
  {"GenerateVerticesOff", PyvtkPointCloudFilter_GenerateVerticesOff, METH_VARARGS,
   "GenerateVerticesOff(self) -> None\nC++: virtual void GenerateVerticesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointCloudFilter_Doc =
  "vtkPointCloudFilter - abstract class for filtering a point cloud\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPointCloudFilter serves as a base for classes that filter point\n"
  "clouds. It takes as input any vtkPointSet (which represents points\n"
  "explicitly using vtkPoints) and produces as output an explicit\n"
  "representation of filtered points via a vtkPolyData. This output\n"
  "vtkPolyData will populate its instance of vtkPoints, and typically no\n"
  "cells will be defined (i.e., no vtkVertex or vtkPolyVertex are\n"
  "contained in the output unless explicitly requested). Also, after\n"
  "filter execution, the user can request a vtkIdType* point map which\n"
  "indicates how the input points were mapped to the output. A value of\n"
  "PointMap[i] < 0 (where i is the ith input point) means that the ith\n"
  "input point was removed. Otherwise PointMap[i] indicates the position\n"
  "in the output vtkPoints array (point cloud).\n\n"
  "Optionally the filter may produce a second output. This second output\n"
  "is another vtkPolyData with a vtkPoints that contains the points that\n"
  "were removed during processing. To produce this second output, you\n"
  "must enable GenerateOutliers. If this optional, second output is\n"
  "created, then the contents of the PointMap are modified as well. In\n"
  "this case, a PointMap[i] < 0 means that the ith input point has been\n"
  "mapped to the (-PointMap[i])-1 position in the second output's\n"
  "vtkPoints.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "The filter copies point attributes from input to output consistent\n"
  "with the filtering operation.\n\n"
  "@warning\n"
  "It is convenient to use vtkPointGaussianMapper to render the points\n"
  "(since this mapper does not require cells to be defined, and it is\n"
  "quite fast).\n\n"
  "@sa\n"
  "vtkRadiusOutlierRemoval vtkPointGaussianMapper vtkThresholdPoints\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointCloudFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointCloudFilter", // tp_name
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
  PyvtkPointCloudFilter_Doc, // tp_doc
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

PyObject *PyvtkPointCloudFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointCloudFilter_Type, PyvtkPointCloudFilter_Methods,
    "vtkPointCloudFilter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointCloudFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointCloudFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointCloudFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

