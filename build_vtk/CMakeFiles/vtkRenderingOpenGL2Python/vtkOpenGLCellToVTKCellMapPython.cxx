// python wrapper for vtkOpenGLCellToVTKCellMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLCellToVTKCellMap.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLCellToVTKCellMap(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLCellToVTKCellMap_ClassNew(); }


static PyObject *
PyvtkOpenGLCellToVTKCellMap_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLCellToVTKCellMap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLCellToVTKCellMap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLCellToVTKCellMap *tempr = vtkOpenGLCellToVTKCellMap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLCellToVTKCellMap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLCellToVTKCellMap::NewInstance());

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
PyvtkOpenGLCellToVTKCellMap_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLCellToVTKCellMap::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLCellToVTKCellMap::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_ConvertOpenGLCellIdToVTKCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertOpenGLCellIdToVTKCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  bool temp0 = false;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->ConvertOpenGLCellIdToVTKCellId(temp0, temp1) :
      op->vtkOpenGLCellToVTKCellMap::ConvertOpenGLCellIdToVTKCellId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkOpenGLCellToVTKCellMap::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_GetPrimitiveOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrimitiveOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetPrimitiveOffsets() :
      op->vtkOpenGLCellToVTKCellMap::GetPrimitiveOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkOpenGLCellToVTKCellMap::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_SetStartOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartOffset(temp0);
    }
    else
    {
      op->vtkOpenGLCellToVTKCellMap::SetStartOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellToVTKCellMap_GetFinalOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellToVTKCellMap *op = static_cast<vtkOpenGLCellToVTKCellMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFinalOffset() :
      op->vtkOpenGLCellToVTKCellMap::GetFinalOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLCellToVTKCellMap_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLCellToVTKCellMap_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLCellToVTKCellMap_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLCellToVTKCellMap_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLCellToVTKCellMap\nC++: static vtkOpenGLCellToVTKCellMap *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLCellToVTKCellMap_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLCellToVTKCellMap\nC++: vtkOpenGLCellToVTKCellMap *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLCellToVTKCellMap_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLCellToVTKCellMap_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ConvertOpenGLCellIdToVTKCellId", PyvtkOpenGLCellToVTKCellMap_ConvertOpenGLCellIdToVTKCellId, METH_VARARGS,
   "ConvertOpenGLCellIdToVTKCellId(self, pointPicking:bool,\n    openGLId:int) -> int\nC++: vtkIdType ConvertOpenGLCellIdToVTKCellId(bool pointPicking,\n    vtkIdType openGLId)\n\n"},
  {"GetSize", PyvtkOpenGLCellToVTKCellMap_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: size_t GetSize()\n\n"},
  {"GetPrimitiveOffsets", PyvtkOpenGLCellToVTKCellMap_GetPrimitiveOffsets, METH_VARARGS,
   "GetPrimitiveOffsets(self) -> Pointer\nC++: vtkIdType *GetPrimitiveOffsets()\n\n"},
  {"GetValue", PyvtkOpenGLCellToVTKCellMap_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> int\nC++: vtkIdType GetValue(size_t i)\n\n"},
  {"SetStartOffset", PyvtkOpenGLCellToVTKCellMap_SetStartOffset, METH_VARARGS,
   "SetStartOffset(self, start:int) -> None\nC++: void SetStartOffset(vtkIdType start)\n\n"},
  {"GetFinalOffset", PyvtkOpenGLCellToVTKCellMap_GetFinalOffset, METH_VARARGS,
   "GetFinalOffset(self) -> int\nC++: vtkIdType GetFinalOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLCellToVTKCellMap_Doc =
  "vtkOpenGLCellToVTKCellMap - OpenGL rendering utility functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLCellToVTKCellMap provides functions map from opengl\n"
  "primitive ID to vtk\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLCellToVTKCellMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLCellToVTKCellMap", // tp_name
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
  PyvtkOpenGLCellToVTKCellMap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLCellToVTKCellMap_StaticNew()
{
  return vtkOpenGLCellToVTKCellMap::New();
}

PyObject *PyvtkOpenGLCellToVTKCellMap_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLCellToVTKCellMap_Type, PyvtkOpenGLCellToVTKCellMap_Methods,
    "vtkOpenGLCellToVTKCellMap",
 &PyvtkOpenGLCellToVTKCellMap_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLCellToVTKCellMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLCellToVTKCellMap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLCellToVTKCellMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

