// python wrapper for vtkCirclePackLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCirclePackLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCirclePackLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkCirclePackLayout_ClassNew(); }


static PyObject *
PyvtkCirclePackLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCirclePackLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCirclePackLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCirclePackLayout *tempr = vtkCirclePackLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCirclePackLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCirclePackLayout::NewInstance());

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
PyvtkCirclePackLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCirclePackLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCirclePackLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_GetCirclesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCirclesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCirclesFieldName() :
      op->vtkCirclePackLayout::GetCirclesFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_SetCirclesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCirclesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCirclesFieldName(temp0);
    }
    else
    {
      op->vtkCirclePackLayout::SetCirclesFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

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
      op->vtkCirclePackLayout::SetSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCirclePackLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkCirclePackLayout::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  vtkCirclePackLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCirclePackLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkCirclePackLayout::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    long long tempr = (ap.IsBound() ?
      op->FindVertex(temp0, temp1) :
      op->vtkCirclePackLayout::FindVertex(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCirclePackLayout_GetBoundingCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBoundingCircle(temp0, temp1);
    }
    else
    {
      op->vtkCirclePackLayout::GetBoundingCircle(temp0, temp1);
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


static PyObject *
PyvtkCirclePackLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCirclePackLayout *op = static_cast<vtkCirclePackLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCirclePackLayout::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCirclePackLayout_Methods[] = {
  {"IsTypeOf", PyvtkCirclePackLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCirclePackLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCirclePackLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCirclePackLayout\nC++: static vtkCirclePackLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCirclePackLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCirclePackLayout\nC++: vtkCirclePackLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCirclePackLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCirclePackLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCirclesFieldName", PyvtkCirclePackLayout_GetCirclesFieldName, METH_VARARGS,
   "GetCirclesFieldName(self) -> str\nC++: virtual char *GetCirclesFieldName()\n\nThe field name to use for storing the circles for each vertex.\nThe rectangles are stored in a triple float array (Xcenter,\nYcenter, Radius). Default name is \"circles\"\n"},
  {"SetCirclesFieldName", PyvtkCirclePackLayout_SetCirclesFieldName, METH_VARARGS,
   "SetCirclesFieldName(self, _arg:str) -> None\nC++: virtual void SetCirclesFieldName(const char *_arg)\n\n"},
  {"SetSizeArrayName", PyvtkCirclePackLayout_SetSizeArrayName, METH_VARARGS,
   "SetSizeArrayName(self, name:str) -> None\nC++: virtual void SetSizeArrayName(const char *name)\n\nThe array to use for the size of each vertex. Default name is\n\"size\".\n"},
  {"GetLayoutStrategy", PyvtkCirclePackLayout_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkCirclePackLayoutStrategy\nC++: virtual vtkCirclePackLayoutStrategy *GetLayoutStrategy()\n\nThe strategy to use when laying out the tree map.\n"},
  {"SetLayoutStrategy", PyvtkCirclePackLayout_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkCirclePackLayoutStrategy)\n    -> None\nC++: void SetLayoutStrategy(vtkCirclePackLayoutStrategy *strategy)\n\n"},
  {"FindVertex", PyvtkCirclePackLayout_FindVertex, METH_VARARGS,
   "FindVertex(self, pnt:[float, float], cinfo:[float, ...]=...)\n    -> int\nC++: vtkIdType FindVertex(double pnt[2], double *cinfo=nullptr)\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit) pnt[0] is x, and pnt[1] is y. If cinfo[3] is provided, then\n(Xcenter, Ycenter, Radius) of the circle containing pnt[2] will\nbe returned.\n"},
  {"GetBoundingCircle", PyvtkCirclePackLayout_GetBoundingCircle, METH_VARARGS,
   "GetBoundingCircle(self, id:int, cinfo:[float, ...]) -> None\nC++: void GetBoundingCircle(vtkIdType id, double *cinfo)\n\nReturn the Xcenter, Ycenter, and Radius of the vertex's bounding\ncircle\n"},
  {"GetMTime", PyvtkCirclePackLayout_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modification time of the layout algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCirclePackLayout_Doc =
  "vtkCirclePackLayout - layout a vtkTree as a circle packing.\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "vtkCirclePackLayout assigns circle shaped regions to each vertex in\n"
  "the tree, creating a circle packing layout.  The data is added as a\n"
  "data array with three components per tuple representing the center\n"
  "and radius of the circle using the format (Xcenter, Ycenter, Radius).\n\n"
  "This algorithm relies on a helper class to perform the actual layout.\n"
  "This helper class is a subclass of vtkCirclePackLayoutStrategy.\n\n"
  "An array by default called \"size\" can be attached to the input tree\n"
  "that specifies the size of each leaf node in the tree.  The filter\n"
  "will calculate the sizes of all interior nodes in the tree based on\n"
  "the sum of the leaf node sizes.  If no \"size\" array is given in the\n"
  "input vtkTree, a size of 1 is used for all leaf nodes to find the\n"
  "size of the interior nodes.\n\n"
  "@par Thanks: Thanks to Thomas Otahal from Sandia National\n"
  "Laboratories for help developing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCirclePackLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkCirclePackLayout", // tp_name
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
  PyvtkCirclePackLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCirclePackLayout_StaticNew()
{
  return vtkCirclePackLayout::New();
}

PyObject *PyvtkCirclePackLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCirclePackLayout_Type, PyvtkCirclePackLayout_Methods,
    "vtkCirclePackLayout",
 &PyvtkCirclePackLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTreeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCirclePackLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCirclePackLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCirclePackLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

