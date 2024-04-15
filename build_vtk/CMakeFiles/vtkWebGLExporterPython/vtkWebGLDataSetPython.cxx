// python wrapper for vtkWebGLDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWebGLObject.h"
#include "vtkWebGLDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkWebGLDataSet_ClassNew(); }


static PyObject *
PyvtkWebGLDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLDataSet *tempr = vtkWebGLDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLDataSet::NewInstance());

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
PyvtkWebGLDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWebGLDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWebGLDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetVertices(temp0, temp1);
    }
    else
    {
      op->vtkWebGLDataSet::SetVertices(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetIndexes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<short> store0(2*size0);
  short *temp0 = store0.Data();
  short *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetIndexes(temp0, temp1);
    }
    else
    {
      op->vtkWebGLDataSet::SetIndexes(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNormals(temp0);
    }
    else
    {
      op->vtkWebGLDataSet::SetNormals(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetColors(temp0);
    }
    else
    {
      op->vtkWebGLDataSet::SetColors(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPoints(temp0, temp1);
    }
    else
    {
      op->vtkWebGLDataSet::SetPoints(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetTCoords(temp0);
    }
    else
    {
      op->vtkWebGLDataSet::SetTCoords(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkWebGLDataSet::SetMatrix(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  WebGLObjectTypes temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "WebGLObjectTypes"))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkWebGLDataSet::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData() :
      op->vtkWebGLDataSet::GetBinaryData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize() :
      op->vtkWebGLDataSet::GetBinarySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBinaryData();
    }
    else
    {
      op->vtkWebGLDataSet::GenerateBinaryData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_HasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasChanged() :
      op->vtkWebGLDataSet::HasChanged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetMD5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMD5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMD5() :
      op->vtkWebGLDataSet::GetMD5());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLDataSet_Methods[] = {
  {"IsTypeOf", PyvtkWebGLDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWebGLDataSet\nC++: static vtkWebGLDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWebGLDataSet\nC++: vtkWebGLDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWebGLDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWebGLDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVertices", PyvtkWebGLDataSet_SetVertices, METH_VARARGS,
   "SetVertices(self, v:[float, ...], size:int) -> None\nC++: void SetVertices(float *v, int size)\n\n"},
  {"SetIndexes", PyvtkWebGLDataSet_SetIndexes, METH_VARARGS,
   "SetIndexes(self, i:[int, ...], size:int) -> None\nC++: void SetIndexes(short *i, int size)\n\n"},
  {"SetNormals", PyvtkWebGLDataSet_SetNormals, METH_VARARGS,
   "SetNormals(self, n:[float, ...]) -> None\nC++: void SetNormals(float *n)\n\n"},
  {"SetColors", PyvtkWebGLDataSet_SetColors, METH_VARARGS,
   "SetColors(self, c:[int, ...]) -> None\nC++: void SetColors(unsigned char *c)\n\n"},
  {"SetPoints", PyvtkWebGLDataSet_SetPoints, METH_VARARGS,
   "SetPoints(self, p:[float, ...], size:int) -> None\nC++: void SetPoints(float *p, int size)\n\n"},
  {"SetTCoords", PyvtkWebGLDataSet_SetTCoords, METH_VARARGS,
   "SetTCoords(self, t:[float, ...]) -> None\nC++: void SetTCoords(float *t)\n\n"},
  {"SetMatrix", PyvtkWebGLDataSet_SetMatrix, METH_VARARGS,
   "SetMatrix(self, m:[float, ...]) -> None\nC++: void SetMatrix(float *m)\n\n"},
  {"SetType", PyvtkWebGLDataSet_SetType, METH_VARARGS,
   "SetType(self, t:WebGLObjectTypes) -> None\nC++: void SetType(WebGLObjectTypes t)\n\n"},
  {"GetBinaryData", PyvtkWebGLDataSet_GetBinaryData, METH_VARARGS,
   "GetBinaryData(self) -> Pointer\nC++: unsigned char *GetBinaryData()\n\n"},
  {"GetBinarySize", PyvtkWebGLDataSet_GetBinarySize, METH_VARARGS,
   "GetBinarySize(self) -> int\nC++: int GetBinarySize()\n\n"},
  {"GenerateBinaryData", PyvtkWebGLDataSet_GenerateBinaryData, METH_VARARGS,
   "GenerateBinaryData(self) -> None\nC++: void GenerateBinaryData()\n\n"},
  {"HasChanged", PyvtkWebGLDataSet_HasChanged, METH_VARARGS,
   "HasChanged(self) -> bool\nC++: bool HasChanged()\n\n"},
  {"GetMD5", PyvtkWebGLDataSet_GetMD5, METH_VARARGS,
   "GetMD5(self) -> str\nC++: std::string GetMD5()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWebGLDataSet_Doc =
  "vtkWebGLDataSet - vtkWebGLDataSet represent vertices, lines,\npolygons, and triangles.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWebGLDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.vtkWebGLDataSet", // tp_name
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
  PyvtkWebGLDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLDataSet_StaticNew()
{
  return vtkWebGLDataSet::New();
}

PyObject *PyvtkWebGLDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWebGLDataSet_Type, PyvtkWebGLDataSet_Methods,
    "vtkWebGLDataSet",
 &PyvtkWebGLDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

