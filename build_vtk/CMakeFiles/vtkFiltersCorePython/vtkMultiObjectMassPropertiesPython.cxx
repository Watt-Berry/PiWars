// python wrapper for vtkMultiObjectMassProperties
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiObjectMassProperties.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiObjectMassProperties(PyObject *dict); }
extern "C" { PyObject *PyvtkMultiObjectMassProperties_ClassNew(); }


static PyObject *
PyvtkMultiObjectMassProperties_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiObjectMassProperties::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiObjectMassProperties::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiObjectMassProperties *tempr = vtkMultiObjectMassProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiObjectMassProperties *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiObjectMassProperties::NewInstance());

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
PyvtkMultiObjectMassProperties_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiObjectMassProperties::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiObjectMassProperties::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SetSkipValidityCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipValidityCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipValidityCheck(temp0);
    }
    else
    {
      op->vtkMultiObjectMassProperties::SetSkipValidityCheck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetSkipValidityCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipValidityCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipValidityCheck() :
      op->vtkMultiObjectMassProperties::GetSkipValidityCheck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SkipValidityCheckOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipValidityCheckOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipValidityCheckOn();
    }
    else
    {
      op->vtkMultiObjectMassProperties::SkipValidityCheckOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SkipValidityCheckOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipValidityCheckOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipValidityCheckOff();
    }
    else
    {
      op->vtkMultiObjectMassProperties::SkipValidityCheckOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SetObjectIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetObjectIdsArrayName(temp0);
    }
    else
    {
      op->vtkMultiObjectMassProperties::SetObjectIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetObjectIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetObjectIdsArrayName() :
      op->vtkMultiObjectMassProperties::GetObjectIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfObjects() :
      op->vtkMultiObjectMassProperties::GetNumberOfObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetAllValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllValid() :
      op->vtkMultiObjectMassProperties::GetAllValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetTotalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalVolume() :
      op->vtkMultiObjectMassProperties::GetTotalVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetTotalArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalArea() :
      op->vtkMultiObjectMassProperties::GetTotalArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiObjectMassProperties_Methods[] = {
  {"IsTypeOf", PyvtkMultiObjectMassProperties_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiObjectMassProperties_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiObjectMassProperties_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiObjectMassProperties\nC++: static vtkMultiObjectMassProperties *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiObjectMassProperties_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiObjectMassProperties\nC++: vtkMultiObjectMassProperties *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiObjectMassProperties_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiObjectMassProperties_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSkipValidityCheck", PyvtkMultiObjectMassProperties_SetSkipValidityCheck, METH_VARARGS,
   "SetSkipValidityCheck(self, _arg:int) -> None\nC++: virtual void SetSkipValidityCheck(vtkTypeBool _arg)\n\nIndicate whether to skip the validity check (the first part of\nthe algorithm). By default this is off; however even if enabled\nvalidity skipping will only occur if a vtkIdTypeArray named\n\"ObjectIds\" is also provided on input to the filter.\n"},
  {"GetSkipValidityCheck", PyvtkMultiObjectMassProperties_GetSkipValidityCheck, METH_VARARGS,
   "GetSkipValidityCheck(self) -> int\nC++: virtual vtkTypeBool GetSkipValidityCheck()\n\n"},
  {"SkipValidityCheckOn", PyvtkMultiObjectMassProperties_SkipValidityCheckOn, METH_VARARGS,
   "SkipValidityCheckOn(self) -> None\nC++: virtual void SkipValidityCheckOn()\n\n"},
  {"SkipValidityCheckOff", PyvtkMultiObjectMassProperties_SkipValidityCheckOff, METH_VARARGS,
   "SkipValidityCheckOff(self) -> None\nC++: virtual void SkipValidityCheckOff()\n\n"},
  {"SetObjectIdsArrayName", PyvtkMultiObjectMassProperties_SetObjectIdsArrayName, METH_VARARGS,
   "SetObjectIdsArrayName(self, arg:str) -> None\nC++: virtual void SetObjectIdsArrayName(const char *arg)\n\nSet/Get the name of the ObjectIds array. This array, which\nindicates in which object a polygon belongs to, can be either\nprovided by the user or computed. The default name is\n\"ObjectIds\".\n"},
  {"GetObjectIdsArrayName", PyvtkMultiObjectMassProperties_GetObjectIdsArrayName, METH_VARARGS,
   "GetObjectIdsArrayName(self) -> str\nC++: virtual const char *GetObjectIdsArrayName()\n\n"},
  {"GetNumberOfObjects", PyvtkMultiObjectMassProperties_GetNumberOfObjects, METH_VARARGS,
   "GetNumberOfObjects(self) -> int\nC++: vtkIdType GetNumberOfObjects()\n\nReturn the number of objects identified. This is valid only after\nthe filter executes. Check the ObjectValidity array which\nindicates which of these identified objects are valid. Invalid\nobjects may have incorrect volume and area values.\n"},
  {"GetAllValid", PyvtkMultiObjectMassProperties_GetAllValid, METH_VARARGS,
   "GetAllValid(self) -> int\nC++: vtkTypeBool GetAllValid()\n\nReturn whether all objects are valid or not. This is valid only\nafter the filter executes.\n"},
  {"GetTotalVolume", PyvtkMultiObjectMassProperties_GetTotalVolume, METH_VARARGS,
   "GetTotalVolume(self) -> float\nC++: double GetTotalVolume()\n\nReturn the summed volume of all objects. This is valid only after\nthe filter executes.\n"},
  {"GetTotalArea", PyvtkMultiObjectMassProperties_GetTotalArea, METH_VARARGS,
   "GetTotalArea(self) -> float\nC++: double GetTotalArea()\n\nReturn the summed area of all objects. This is valid only after\nthe filter executes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMultiObjectMassProperties_Doc =
  "vtkMultiObjectMassProperties - compute volume and area of objects in\na polygonal mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMultiObjectMassProperties estimates the volume, the surface area,\n"
  "and the centroid of a polygonal mesh. Multiple, valid closed objects\n"
  "may be represented, and each object is assumed to be defined as a\n"
  "polyhedron defined by polygonal faces (i.e., the faces do not have to\n"
  "be triangles). The algorithm computes the total volume and area, as\n"
  "well as per object values which are placed in data arrays. Note that\n"
  "an object is valid only if it is manifold and closed (i.e., each edge\n"
  "is used exactly two times by two different polygons). Invalid objects\n"
  "are processed but may produce inaccurate results. Inconsistent\n"
  "polygon ordering is also allowed.\n\n"
  "The algorithm is composed of two basic parts. First a connected\n"
  "traversal is performed to identify objects, detect whether the\n"
  "objects are valid, and ensure that the composing polygons are ordered\n"
  "consistently. Next, in threaded execution, a parallel process of\n"
  "computing areas, volumes  and centroids is performed. It is possible\n"
  "to skip the first part if the SkipValidityCheck is enabled, AND a\n"
  "vtkIdTypeArray data array named \"ObjectIds\" is associated with the\n"
  "polygon input (i.e., cell data) that enumerates which object every\n"
  "polygon belongs to (i.e., indicates that it is a boundary polygon of\n"
  "a specified object).\n\n"
  "The algorithm implemented here is inspired by this paper:\n"
  "http://chenlab.ece.cornell.edu/Publication/Cha/icip01_Cha.pdf. Also\n"
  "see the stack-overflow entry:\n"
  "https://stackoverflow.com/questions/1406029/. The centroids are\n"
  "calculated as a weighted average of the centroids of the tetrahedrons\n"
  "which are used to compute the volume of the polygonal object, and the\n"
  "weight is the tetrahedron's volume contribution. If the polygonal\n"
  "object has 0 volume, then the resulted centroid will be (nan, nan,\n"
  "nan). The general assumption here is that the model is of closed\n"
  "surface.  Also, this approach requires triangulating the polygons so\n"
  "triangle meshes are processed much faster. Finally, the volume, area\n"
  "and centroid calculations are done in parallel (threaded) after a\n"
  "connectivity pass is made (used to identify objects and verify that\n"
  "they are manifold and closed).\n\n"
  "The output contains seven additional data arrays. The arrays\n"
  "\"ObjectValidity\", \"ObjectVolumes\", \"ObjectAreas\" and\n"
  "\"ObjectCentroids\" are placed in the output field data.  These are\n"
  "arrays which indicate which objects are valid; the volume of each\n"
  "object; the surface area of each object; the centroid of each object.\n"
  "Three additional arrays are placed in the output cell data, and\n"
  "indicate, on a per polygons basis, which object the polygon bounds\n"
  "\"ObjectIds\"; the polygon area \"Areas\"; and the contribution of volume\n"
  "\"Volumes\".  Additionally, the TotalVolume and TotalArea is available\n"
  "after the filter executes (i.e., the sum of the ObjectVolumes and\n"
  "ObjectAreas arrays).\n\n"
  "Per-object validity, as mentioned previously, is reported in the\n"
  "ObjectValidity array. However another variable, AllValid, is set\n"
  "after filter execution which indicates whether all objects are valid\n"
  "(!=0) or not. This information can be used as a shortcut in case you\n"
  "want to skip validity checking on an object-by-object basis.\n\n"
  "@warning\n"
  "This filter operates on the polygonal data contained in the input\n"
  "vtkPolyData. Other types (vertices, lines, triangle strips) are\n"
  "ignored and not passed to the output. The input polys and points, as\n"
  "well as associated point and cell data, are passed through to the\n"
  "output.\n\n"
  "@warning\n"
  "This filter is similar to vtkMassProperties. However\n"
  "vtkMassProperties operates on triangle meshes and assumes only a\n"
  "single, closed, properly oriented surface is represented.\n"
  "vtkMultiObjectMassProperties performs additional topological and\n"
  "connectivity operations to identify separate objects, and confirms\n"
  "that they are manifold. It also accommodates inconsistent ordering.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkMassProperties\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiObjectMassProperties_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkMultiObjectMassProperties", // tp_name
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
  PyvtkMultiObjectMassProperties_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiObjectMassProperties_StaticNew()
{
  return vtkMultiObjectMassProperties::New();
}

PyObject *PyvtkMultiObjectMassProperties_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiObjectMassProperties_Type, PyvtkMultiObjectMassProperties_Methods,
    "vtkMultiObjectMassProperties",
 &PyvtkMultiObjectMassProperties_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiObjectMassProperties(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiObjectMassProperties_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiObjectMassProperties", o) != 0)
  {
    Py_DECREF(o);
  }

}

