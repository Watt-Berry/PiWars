// python wrapper for vtkRecursiveSphereDirectionEncoder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRecursiveSphereDirectionEncoder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(PyObject *dict); }
extern "C" { PyObject *PyvtkRecursiveSphereDirectionEncoder_ClassNew(); }

#ifndef DECLARED_PyvtkDirectionEncoder_ClassNew
extern "C" { PyObject *PyvtkDirectionEncoder_ClassNew(); }
#define DECLARED_PyvtkDirectionEncoder_ClassNew
#endif

static PyObject *
PyvtkRecursiveSphereDirectionEncoder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRecursiveSphereDirectionEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRecursiveSphereDirectionEncoder *tempr = vtkRecursiveSphereDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecursiveSphereDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecursiveSphereDirectionEncoder::NewInstance());

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
PyvtkRecursiveSphereDirectionEncoder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRecursiveSphereDirectionEncoder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetEncodedDirection(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::GetEncodedDirection(temp0));

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
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradient(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEncodedDirections() :
      op->vtkRecursiveSphereDirectionEncoder::GetNumberOfEncodedDirections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradientTable() :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradientTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecursionDepth(temp0);
    }
    else
    {
      op->vtkRecursiveSphereDirectionEncoder::SetRecursionDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMinValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMaxValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepth() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRecursiveSphereDirectionEncoder_Methods[] = {
  {"IsTypeOf", PyvtkRecursiveSphereDirectionEncoder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRecursiveSphereDirectionEncoder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRecursiveSphereDirectionEncoder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkRecursiveSphereDirectionEncoder\nC++: static vtkRecursiveSphereDirectionEncoder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRecursiveSphereDirectionEncoder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRecursiveSphereDirectionEncoder\nC++: vtkRecursiveSphereDirectionEncoder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRecursiveSphereDirectionEncoder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRecursiveSphereDirectionEncoder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEncodedDirection", PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   "GetEncodedDirection(self, n:[float, float, float]) -> int\nC++: int GetEncodedDirection(float n[3]) override;\n\nGiven a normal vector n, return the encoded direction\n"},
  {"GetDecodedGradient", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   "GetDecodedGradient(self, value:int) -> (float, float, float)\nC++: float *GetDecodedGradient(int value) override;\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {"GetNumberOfEncodedDirections", PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   "GetNumberOfEncodedDirections(self) -> int\nC++: int GetNumberOfEncodedDirections() override;\n\nReturn the number of encoded directions\n"},
  {"GetDecodedGradientTable", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   "GetDecodedGradientTable(self) -> Pointer\nC++: float *GetDecodedGradientTable() override;\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {"SetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth, METH_VARARGS,
   "SetRecursionDepth(self, _arg:int) -> None\nC++: virtual void SetRecursionDepth(int _arg)\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {"GetRecursionDepthMinValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue, METH_VARARGS,
   "GetRecursionDepthMinValue(self) -> int\nC++: virtual int GetRecursionDepthMinValue()\n\n"},
  {"GetRecursionDepthMaxValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue, METH_VARARGS,
   "GetRecursionDepthMaxValue(self) -> int\nC++: virtual int GetRecursionDepthMaxValue()\n\n"},
  {"GetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth, METH_VARARGS,
   "GetRecursionDepth(self) -> int\nC++: virtual int GetRecursionDepth()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRecursiveSphereDirectionEncoder_Doc =
  "vtkRecursiveSphereDirectionEncoder - A direction encoder based on the\nrecursive subdivision of an octahedron\n\n"
  "Superclass: vtkDirectionEncoder\n\n"
  "vtkRecursiveSphereDirectionEncoder is a direction encoder which uses\n"
  "the vertices of a recursive subdivision of an octahedron (with the\n"
  "vertices pushed out onto the surface of an enclosing sphere) to\n"
  "encode directions into a two byte value.\n\n"
  "@sa\n"
  "vtkDirectionEncoder\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRecursiveSphereDirectionEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkRecursiveSphereDirectionEncoder", // tp_name
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
  PyvtkRecursiveSphereDirectionEncoder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRecursiveSphereDirectionEncoder_StaticNew()
{
  return vtkRecursiveSphereDirectionEncoder::New();
}

PyObject *PyvtkRecursiveSphereDirectionEncoder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRecursiveSphereDirectionEncoder_Type, PyvtkRecursiveSphereDirectionEncoder_Methods,
    "vtkRecursiveSphereDirectionEncoder",
 &PyvtkRecursiveSphereDirectionEncoder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDirectionEncoder_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRecursiveSphereDirectionEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRecursiveSphereDirectionEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

