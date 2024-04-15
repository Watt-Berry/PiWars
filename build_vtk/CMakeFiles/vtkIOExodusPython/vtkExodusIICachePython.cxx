// python wrapper for vtkExodusIICache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExodusIICache.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExodusIICache(PyObject *dict); }

static PyObject *
PyvtkExodusIICacheKey_match(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "match");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkExodusIICacheKey *op = static_cast<vtkExodusIICacheKey *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkExodusIICacheKey *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkExodusIICacheKey"))
  {
    bool tempr = op->match(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkExodusIICacheKey_Methods[] = {
  {"match", PyvtkExodusIICacheKey_match, METH_VARARGS,
   "match(self, other:vtkExodusIICacheKey,\n    pattern:vtkExodusIICacheKey) -> bool\nC++: bool match(const vtkExodusIICacheKey &other,\n    const vtkExodusIICacheKey &pattern)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey();

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey"))
  {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey(*temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods[] = {
  {"vtkExodusIICacheKey", PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3, METH_VARARGS,
   "@W vtkExodusIICacheKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(self, args);
    case 4:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(self, args);
    case 1:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheKey");
  return nullptr;
}


static const char *PyvtkExodusIICacheKey_Doc =

  "vtkExodusIICacheKey() -> vtkExodusIICacheKey\nC++: vtkExodusIICacheKey()\nvtkExodusIICacheKey(time:int, objType:int, objId:int, arrId:int)\n    -> vtkExodusIICacheKey\nC++: vtkExodusIICacheKey(int time, int objType, int objId, int arrId)\nvtkExodusIICacheKey(src:vtkExodusIICacheKey) -> vtkExodusIICacheKey\nC++: vtkExodusIICacheKey(const vtkExodusIICacheKey &src)\n""\n"
  "vtkExodusIICacheKey - no description provided.\n\n"
;

static PyObject *
PyvtkExodusIICacheKey_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkExodusIICacheKey_vtkExodusIICacheKey(nullptr, args);
}

static void PyvtkExodusIICacheKey_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkExodusIICacheKey *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkExodusIICacheKey_CheckExact(PyObject *ob);

static PyObject *PyvtkExodusIICacheKey_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkExodusIICacheKey *so1 = nullptr;
  const vtkExodusIICacheKey *so2 = nullptr;
  int result = -1;

  if (PyvtkExodusIICacheKey_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkExodusIICacheKey *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkExodusIICacheKey", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkExodusIICacheKey_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkExodusIICacheKey *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkExodusIICacheKey", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      break;
    case Py_NE:
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkExodusIICacheKey_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExodusIICacheKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkExodusIICacheKey", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheKey_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkExodusIICacheKey_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkExodusIICacheKey_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkExodusIICacheKey_RichCompare, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkExodusIICacheKey_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkExodusIICacheKey_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkExodusIICacheKey_Type);
}

static void *PyvtkExodusIICacheKey_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkExodusIICacheKey(*static_cast<const vtkExodusIICacheKey*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkExodusIICacheKey_TypeNew
extern "C" { PyObject *PyvtkExodusIICacheKey_TypeNew(); }
#define DECLARED_PyvtkExodusIICacheKey_TypeNew
#endif

PyObject *PyvtkExodusIICacheKey_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkExodusIICacheKey_Type,
    PyvtkExodusIICacheKey_Methods,
    PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods,
    &PyvtkExodusIICacheKey_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkExodusIICacheEntry_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkExodusIICacheEntry *op = static_cast<vtkExodusIICacheEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = op->GetValue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_Methods[] = {
  {"GetValue", PyvtkExodusIICacheEntry_GetValue, METH_VARARGS,
   "GetValue(self) -> vtkDataArray\nC++: vtkDataArray *GetValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry();

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry(temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  return result;
}

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  vtkExodusIICacheEntry *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheEntry"))
  {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry(*temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods[] = {
  {"vtkExodusIICacheEntry", PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2, METH_VARARGS,
   "@V *vtkDataArray"},
  {"vtkExodusIICacheEntry", PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s3, METH_VARARGS,
   "@W vtkExodusIICacheEntry"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheEntry");
  return nullptr;
}


static const char *PyvtkExodusIICacheEntry_Doc =

  "vtkExodusIICacheEntry() -> vtkExodusIICacheEntry\nC++: vtkExodusIICacheEntry()\nvtkExodusIICacheEntry(arr:vtkDataArray) -> vtkExodusIICacheEntry\nC++: vtkExodusIICacheEntry(vtkDataArray *arr)\nvtkExodusIICacheEntry(other:vtkExodusIICacheEntry)\n    -> vtkExodusIICacheEntry\nC++: vtkExodusIICacheEntry(const vtkExodusIICacheEntry &other)\n""\n"
  "vtkExodusIICacheEntry - no description provided.\n\n"
;

static PyObject *
PyvtkExodusIICacheEntry_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(nullptr, args);
}

static void PyvtkExodusIICacheEntry_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkExodusIICacheEntry *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkExodusIICacheEntry_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExodusIICacheEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkExodusIICacheEntry", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheEntry_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkExodusIICacheEntry_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkExodusIICacheEntry_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkExodusIICacheEntry_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkExodusIICacheEntry_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkExodusIICacheEntry(*static_cast<const vtkExodusIICacheEntry*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkExodusIICacheEntry_TypeNew
extern "C" { PyObject *PyvtkExodusIICacheEntry_TypeNew(); }
#define DECLARED_PyvtkExodusIICacheEntry_TypeNew
#endif

PyObject *PyvtkExodusIICacheEntry_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkExodusIICacheEntry_Type,
    PyvtkExodusIICacheEntry_Methods,
    PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods,
    &PyvtkExodusIICacheEntry_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkExodusIICache_ClassNew(); }


static PyObject *
PyvtkExodusIICache_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExodusIICache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIICache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExodusIICache *tempr = vtkExodusIICache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExodusIICache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIICache::NewInstance());

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
PyvtkExodusIICache_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExodusIICache::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExodusIICache::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkExodusIICache::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_SetCacheCapacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCapacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheCapacity(temp0);
    }
    else
    {
      op->vtkExodusIICache::SetCacheCapacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_GetSpaceLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpaceLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpaceLeft() :
      op->vtkExodusIICache::GetSpaceLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_ReduceToSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceToSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ReduceToSize(temp0) :
      op->vtkExodusIICache::ReduceToSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Insert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Insert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkExodusIICacheKey") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Insert(*temp0, temp1);
    }
    else
    {
      op->vtkExodusIICache::Insert(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIICache_Invalidate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Invalidate(*temp0) :
      op->vtkExodusIICache::Invalidate(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkExodusIICache_Invalidate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  vtkExodusIICacheKey *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkExodusIICacheKey *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkExodusIICacheKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkExodusIICacheKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Invalidate(*temp0, *temp1) :
      op->vtkExodusIICache::Invalidate(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkExodusIICache_Invalidate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExodusIICache_Invalidate_s1(self, args);
    case 2:
      return PyvtkExodusIICache_Invalidate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invalidate");
  return nullptr;
}

static PyMethodDef PyvtkExodusIICache_Methods[] = {
  {"IsTypeOf", PyvtkExodusIICache_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExodusIICache_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExodusIICache_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExodusIICache\nC++: static vtkExodusIICache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExodusIICache_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExodusIICache\nC++: vtkExodusIICache *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExodusIICache_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExodusIICache_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clear", PyvtkExodusIICache_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\nEmpty the cache\n"},
  {"SetCacheCapacity", PyvtkExodusIICache_SetCacheCapacity, METH_VARARGS,
   "SetCacheCapacity(self, sizeInMiB:float) -> None\nC++: void SetCacheCapacity(double sizeInMiB)\n\nSet the maximum allowable cache size. This will remove cache\nentries if the capacity is reduced below the current size.\n"},
  {"GetSpaceLeft", PyvtkExodusIICache_GetSpaceLeft, METH_VARARGS,
   "GetSpaceLeft(self) -> float\nC++: double GetSpaceLeft()\n\nSee how much cache space is left. This is the difference between\nthe capacity and the size of the cache. The result is in MiB.\n"},
  {"ReduceToSize", PyvtkExodusIICache_ReduceToSize, METH_VARARGS,
   "ReduceToSize(self, newSize:float) -> int\nC++: int ReduceToSize(double newSize)\n\nRemove cache entries until the size of the cache is at or below\nthe given size. Returns a nonzero value if deletions were\nrequired.\n"},
  {"Insert", PyvtkExodusIICache_Insert, METH_VARARGS,
   "Insert(self, key:vtkExodusIICacheKey, value:vtkDataArray) -> None\nC++: void Insert(vtkExodusIICacheKey &key, vtkDataArray *value)\n\nInsert an entry into the cache (this can remove other cache\nentries to make space).\n"},
  {"Invalidate", PyvtkExodusIICache_Invalidate, METH_VARARGS,
   "Invalidate(self, key:vtkExodusIICacheKey) -> int\nC++: int Invalidate(const vtkExodusIICacheKey &key)\nInvalidate(self, key:vtkExodusIICacheKey,\n    pattern:vtkExodusIICacheKey) -> int\nC++: int Invalidate(const vtkExodusIICacheKey &key,\n    const vtkExodusIICacheKey &pattern)\n\nInvalidate a cache entry (drop it from the cache) if the key\nexists. This does nothing if the cache entry does not exist.\nReturns 1 if the cache entry existed prior to this call and 0\notherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExodusIICache_Doc =
  "vtkExodusIICache - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExodusIICache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkExodusIICache", // tp_name
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
  PyvtkExodusIICache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExodusIICache_StaticNew()
{
  return vtkExodusIICache::New();
}

PyObject *PyvtkExodusIICache_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExodusIICache_Type, PyvtkExodusIICache_Methods,
    "vtkExodusIICache",
 &PyvtkExodusIICache_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExodusIICache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExodusIICacheKey_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICacheKey", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkExodusIICacheEntry_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICacheEntry", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkExodusIICache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIICache", o) != 0)
  {
    Py_DECREF(o);
  }

}

