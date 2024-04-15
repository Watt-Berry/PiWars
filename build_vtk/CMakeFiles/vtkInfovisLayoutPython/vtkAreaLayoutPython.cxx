// python wrapper for vtkAreaLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAreaLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAreaLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkAreaLayout_ClassNew(); }


static PyObject *
PyvtkAreaLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAreaLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAreaLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAreaLayout *tempr = vtkAreaLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAreaLayout::NewInstance());

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
PyvtkAreaLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAreaLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAreaLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeArrayName(temp0);
    }
    else
    {
      op->vtkAreaLayout::SetSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAreaArrayName() :
      op->vtkAreaLayout::GetAreaArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaArrayName(temp0);
    }
    else
    {
      op->vtkAreaLayout::SetAreaArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetEdgeRoutingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeRoutingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeRoutingPoints() :
      op->vtkAreaLayout::GetEdgeRoutingPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetEdgeRoutingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeRoutingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeRoutingPoints(temp0);
    }
    else
    {
      op->vtkAreaLayout::SetEdgeRoutingPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_EdgeRoutingPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeRoutingPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeRoutingPointsOn();
    }
    else
    {
      op->vtkAreaLayout::EdgeRoutingPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_EdgeRoutingPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeRoutingPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeRoutingPointsOff();
    }
    else
    {
      op->vtkAreaLayout::EdgeRoutingPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkAreaLayout::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  vtkAreaLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkAreaLayout::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAreaLayout::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaLayout_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindVertex(temp0) :
      op->vtkAreaLayout::FindVertex(temp0));

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
PyvtkAreaLayout_GetBoundingArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBoundingArea(temp0, temp1);
    }
    else
    {
      op->vtkAreaLayout::GetBoundingArea(temp0, temp1);
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

static PyMethodDef PyvtkAreaLayout_Methods[] = {
  {"IsTypeOf", PyvtkAreaLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAreaLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAreaLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAreaLayout\nC++: static vtkAreaLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAreaLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAreaLayout\nC++: vtkAreaLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAreaLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAreaLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSizeArrayName", PyvtkAreaLayout_SetSizeArrayName, METH_VARARGS,
   "SetSizeArrayName(self, name:str) -> None\nC++: virtual void SetSizeArrayName(const char *name)\n\nThe array name to use for retrieving the relative size of each\nvertex. If this array is not found, use constant size for each\nvertex.\n"},
  {"GetAreaArrayName", PyvtkAreaLayout_GetAreaArrayName, METH_VARARGS,
   "GetAreaArrayName(self) -> str\nC++: virtual char *GetAreaArrayName()\n\nThe name for the array created for the area for each vertex. The\nrectangles are stored in a quadruple float array (startAngle,\nendAngle, innerRadius, outerRadius). For rectangular layouts,\nthis is (minx, maxx, miny, maxy).\n"},
  {"SetAreaArrayName", PyvtkAreaLayout_SetAreaArrayName, METH_VARARGS,
   "SetAreaArrayName(self, _arg:str) -> None\nC++: virtual void SetAreaArrayName(const char *_arg)\n\n"},
  {"GetEdgeRoutingPoints", PyvtkAreaLayout_GetEdgeRoutingPoints, METH_VARARGS,
   "GetEdgeRoutingPoints(self) -> bool\nC++: virtual bool GetEdgeRoutingPoints()\n\nWhether to output a second output tree with vertex locations\nappropriate for routing bundled edges. Default is on.\n"},
  {"SetEdgeRoutingPoints", PyvtkAreaLayout_SetEdgeRoutingPoints, METH_VARARGS,
   "SetEdgeRoutingPoints(self, _arg:bool) -> None\nC++: virtual void SetEdgeRoutingPoints(bool _arg)\n\n"},
  {"EdgeRoutingPointsOn", PyvtkAreaLayout_EdgeRoutingPointsOn, METH_VARARGS,
   "EdgeRoutingPointsOn(self) -> None\nC++: virtual void EdgeRoutingPointsOn()\n\n"},
  {"EdgeRoutingPointsOff", PyvtkAreaLayout_EdgeRoutingPointsOff, METH_VARARGS,
   "EdgeRoutingPointsOff(self) -> None\nC++: virtual void EdgeRoutingPointsOff()\n\n"},
  {"GetLayoutStrategy", PyvtkAreaLayout_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkAreaLayoutStrategy\nC++: virtual vtkAreaLayoutStrategy *GetLayoutStrategy()\n\nThe strategy to use when laying out the tree map.\n"},
  {"SetLayoutStrategy", PyvtkAreaLayout_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkAreaLayoutStrategy) -> None\nC++: void SetLayoutStrategy(vtkAreaLayoutStrategy *strategy)\n\n"},
  {"GetMTime", PyvtkAreaLayout_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modification time of the layout algorithm.\n"},
  {"FindVertex", PyvtkAreaLayout_FindVertex, METH_VARARGS,
   "FindVertex(self, pnt:[float, float]) -> int\nC++: vtkIdType FindVertex(float pnt[2])\n\nGet the vertex whose area contains the point, or return -1 if no\nvertex area covers the point.\n"},
  {"GetBoundingArea", PyvtkAreaLayout_GetBoundingArea, METH_VARARGS,
   "GetBoundingArea(self, id:int, sinfo:[float, ...]) -> None\nC++: void GetBoundingArea(vtkIdType id, float *sinfo)\n\nThe bounding area information for a certain vertex id.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAreaLayout_Doc =
  "vtkAreaLayout - layout a vtkTree into a tree map\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "vtkAreaLayout assigns sector regions to each vertex in the tree,\n"
  "creating a tree ring.  The data is added as a data array with four\n"
  "components per tuple representing the location and size of the sector\n"
  "using the format (StartAngle, EndAngle, innerRadius, outerRadius).\n\n"
  "This algorithm relies on a helper class to perform the actual layout.\n"
  "This helper class is a subclass of vtkAreaLayoutStrategy.\n\n"
  "@par Thanks: Thanks to Jason Shepherd from Sandia National\n"
  "Laboratories for help developing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAreaLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkAreaLayout", // tp_name
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
  PyvtkAreaLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAreaLayout_StaticNew()
{
  return vtkAreaLayout::New();
}

PyObject *PyvtkAreaLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAreaLayout_Type, PyvtkAreaLayout_Methods,
    "vtkAreaLayout",
 &PyvtkAreaLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTreeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAreaLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAreaLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAreaLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

