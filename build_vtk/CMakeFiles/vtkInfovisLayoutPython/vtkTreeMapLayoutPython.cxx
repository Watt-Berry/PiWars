// python wrapper for vtkTreeMapLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeMapLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeMapLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeMapLayout_ClassNew(); }


static PyObject *
PyvtkTreeMapLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeMapLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeMapLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeMapLayout *tempr = vtkTreeMapLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeMapLayout::NewInstance());

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
PyvtkTreeMapLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeMapLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeMapLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetRectanglesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectanglesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRectanglesFieldName() :
      op->vtkTreeMapLayout::GetRectanglesFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetRectanglesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRectanglesFieldName(temp0);
    }
    else
    {
      op->vtkTreeMapLayout::SetRectanglesFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      op->vtkTreeMapLayout::SetSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkTreeMapLayout::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  vtkTreeMapLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkTreeMapLayout::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    long long tempr = (ap.IsBound() ?
      op->FindVertex(temp0, temp1) :
      op->vtkTreeMapLayout::FindVertex(temp0, temp1));

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
PyvtkTreeMapLayout_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      op->GetBoundingBox(temp0, temp1);
    }
    else
    {
      op->vtkTreeMapLayout::GetBoundingBox(temp0, temp1);
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
PyvtkTreeMapLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTreeMapLayout::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeMapLayout_Methods[] = {
  {"IsTypeOf", PyvtkTreeMapLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeMapLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeMapLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeMapLayout\nC++: static vtkTreeMapLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeMapLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeMapLayout\nC++: vtkTreeMapLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeMapLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeMapLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRectanglesFieldName", PyvtkTreeMapLayout_GetRectanglesFieldName, METH_VARARGS,
   "GetRectanglesFieldName(self) -> str\nC++: virtual char *GetRectanglesFieldName()\n\nThe field name to use for storing the rectangles for each vertex.\nThe rectangles are stored in a quadruple float array (minX, maxX,\nminY, maxY).\n"},
  {"SetRectanglesFieldName", PyvtkTreeMapLayout_SetRectanglesFieldName, METH_VARARGS,
   "SetRectanglesFieldName(self, _arg:str) -> None\nC++: virtual void SetRectanglesFieldName(const char *_arg)\n\n"},
  {"SetSizeArrayName", PyvtkTreeMapLayout_SetSizeArrayName, METH_VARARGS,
   "SetSizeArrayName(self, name:str) -> None\nC++: virtual void SetSizeArrayName(const char *name)\n\nThe array to use for the size of each vertex.\n"},
  {"GetLayoutStrategy", PyvtkTreeMapLayout_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkTreeMapLayoutStrategy\nC++: virtual vtkTreeMapLayoutStrategy *GetLayoutStrategy()\n\nThe strategy to use when laying out the tree map.\n"},
  {"SetLayoutStrategy", PyvtkTreeMapLayout_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkTreeMapLayoutStrategy) -> None\nC++: void SetLayoutStrategy(vtkTreeMapLayoutStrategy *strategy)\n\n"},
  {"FindVertex", PyvtkTreeMapLayout_FindVertex, METH_VARARGS,
   "FindVertex(self, pnt:[float, float], binfo:[float, ...]=...)\n    -> int\nC++: vtkIdType FindVertex(float pnt[2], float *binfo=nullptr)\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit)\n"},
  {"GetBoundingBox", PyvtkTreeMapLayout_GetBoundingBox, METH_VARARGS,
   "GetBoundingBox(self, id:int, binfo:[float, ...]) -> None\nC++: void GetBoundingBox(vtkIdType id, float *binfo)\n\nReturn the min and max 2D points of the vertex's bounding box\n"},
  {"GetMTime", PyvtkTreeMapLayout_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modification time of the layout algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeMapLayout_Doc =
  "vtkTreeMapLayout - layout a vtkTree into a tree map\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "vtkTreeMapLayout assigns rectangular regions to each vertex in the\n"
  "tree, creating a tree map.  The data is added as a data array with\n"
  "four components per tuple representing the location and size of the\n"
  "rectangle using the format (Xmin, Xmax, Ymin, Ymax).\n\n"
  "This algorithm relies on a helper class to perform the actual layout.\n"
  "This helper class is a subclass of vtkTreeMapLayoutStrategy.\n\n"
  "@par Thanks: Thanks to Brian Wylie and Ken Moreland from Sandia\n"
  "National Laboratories for help developing this class.\n\n"
  "@par Thanks: Tree map concept comes from: Shneiderman, B. 1992. Tree\n"
  "visualization with tree-maps: 2-d space-filling approach. ACM Trans.\n"
  "Graph. 11, 1 (Jan. 1992), 92-99.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeMapLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkTreeMapLayout", // tp_name
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
  PyvtkTreeMapLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeMapLayout_StaticNew()
{
  return vtkTreeMapLayout::New();
}

PyObject *PyvtkTreeMapLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeMapLayout_Type, PyvtkTreeMapLayout_Methods,
    "vtkTreeMapLayout",
 &PyvtkTreeMapLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTreeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeMapLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeMapLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeMapLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

