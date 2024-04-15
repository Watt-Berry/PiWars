// python wrapper for vtkURI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkURI.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkURI(PyObject *dict); }

static PyObject *
PyvtkURIComponent_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkURIComponent *op = static_cast<vtkURIComponent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = &op->GetValue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIComponent_IsDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDefined");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkURIComponent *op = static_cast<vtkURIComponent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsDefined();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURIComponent_Methods[] = {
  {"GetValue", PyvtkURIComponent_GetValue, METH_VARARGS,
   "GetValue(self) -> str\nC++: const std::string &GetValue() noexcept;\n\n@return Return component value. Is empty if this is undefined.\n"},
  {"IsDefined", PyvtkURIComponent_IsDefined, METH_VARARGS,
   "IsDefined(self) -> bool\nC++: bool IsDefined() noexcept;\n\n@return `true` if this is defined, `false` otherwise\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkURIComponent_vtkURIComponent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkURIComponent");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkURIComponent *op = new vtkURIComponent();

    result = PyVTKSpecialObject_New("vtkURIComponent", op);
  }

  return result;
}

static PyObject *
PyvtkURIComponent_vtkURIComponent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkURIComponent");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkURIComponent *op = new vtkURIComponent(temp0);

    result = PyVTKSpecialObject_New("vtkURIComponent", op);
  }

  return result;
}

static PyObject *
PyvtkURIComponent_vtkURIComponent_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkURIComponent");

  vtkURIComponent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkURIComponent"))
  {
    vtkURIComponent *op = new vtkURIComponent(*temp0);

    result = PyVTKSpecialObject_New("vtkURIComponent", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkURIComponent_vtkURIComponent_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkURIComponent");

  vtkURIComponent *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkURIComponent"))
  {
    vtkURIComponent *op = new vtkURIComponent(*temp0);

    result = PyVTKSpecialObject_New("vtkURIComponent", op);
  }

  return result;
}

static PyMethodDef PyvtkURIComponent_vtkURIComponent_Methods[] = {
  {"vtkURIComponent", PyvtkURIComponent_vtkURIComponent_s2, METH_VARARGS,
   "@s"},
  {"vtkURIComponent", PyvtkURIComponent_vtkURIComponent_s3, METH_VARARGS,
   "@W vtkURIComponent"},
  {"vtkURIComponent", PyvtkURIComponent_vtkURIComponent_s4, METH_VARARGS,
   "@W &vtkURIComponent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkURIComponent_vtkURIComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkURIComponent_vtkURIComponent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkURIComponent_vtkURIComponent_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkURIComponent");
  return nullptr;
}


static const char *PyvtkURIComponent_Doc =

  "vtkURIComponent() -> vtkURIComponent\nC++: vtkURIComponent()\nvtkURIComponent(str:str) -> vtkURIComponent\nC++: vtkURIComponent(std::string str)\nvtkURIComponent(__a:vtkURIComponent) -> vtkURIComponent\nC++: vtkURIComponent(const vtkURIComponent &)\nvtkURIComponent(__a:vtkURIComponent) -> vtkURIComponent\nC++: vtkURIComponent(vtkURIComponent &&)\n""\n"
  "vtkURIComponent - Represent an URI component\n\n"
  "An URI can have an empty but defined component. This applies to\n"
  "authority, path, query and fragment. This is mainly used for strong\n"
  "string reconstruction, example:\n"
  "`vtkURI::Parse(\"file://?#\")->ToString()` must return `\"file://?#\"`,\n"
  "all components are empty, but defined, so they must be restored when\n"
  "recomposition the URI string representation. URI path is always\n"
  "defined for a valid URI.\n\n";

static PyObject *
PyvtkURIComponent_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkURIComponent_vtkURIComponent(nullptr, args);
}

static void PyvtkURIComponent_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkURIComponent *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkURIComponent_CheckExact(PyObject *ob);

static PyObject *PyvtkURIComponent_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkURIComponent *so1 = nullptr;
  const vtkURIComponent *so2 = nullptr;
  int result = -1;

  if (PyvtkURIComponent_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkURIComponent *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkURIComponent *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkURIComponent", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkURIComponent_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkURIComponent *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkURIComponent *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkURIComponent", &n2));
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
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
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

static Py_hash_t PyvtkURIComponent_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkURIComponent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkURIComponent", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkURIComponent_Delete, // tp_dealloc
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
  PyvtkURIComponent_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkURIComponent_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkURIComponent_RichCompare, // tp_richcompare
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
  PyvtkURIComponent_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkURIComponent_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkURIComponent_Type);
}

static void *PyvtkURIComponent_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkURIComponent(*static_cast<const vtkURIComponent*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkURIComponent_TypeNew
extern "C" { PyObject *PyvtkURIComponent_TypeNew(); }
#define DECLARED_PyvtkURIComponent_TypeNew
#endif

PyObject *PyvtkURIComponent_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkURIComponent_Type,
    PyvtkURIComponent_Methods,
    PyvtkURIComponent_vtkURIComponent_Methods,
    &PyvtkURIComponent_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkURI_ClassNew(); }


static PyObject *
PyvtkURI_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkURI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkURI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkURI *tempr = vtkURI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkURI::NewInstance());

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
PyvtkURI_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkURI::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkURI::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_PercentEncode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentEncode");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkURI::PercentEncode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_PercentEncode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentEncode");

  const char *temp0 = nullptr;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkURI::PercentEncode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_PercentEncode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkURI_PercentEncode_s1(self, args);
    case 2:
      return PyvtkURI_PercentEncode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PercentEncode");
  return nullptr;
}


static PyObject *
PyvtkURI_PercentDecode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentDecode");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkURI::PercentDecode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_PercentDecode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentDecode");

  const char *temp0 = nullptr;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkURI::PercentDecode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_PercentDecode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkURI_PercentDecode_s1(self, args);
    case 2:
      return PyvtkURI_PercentDecode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PercentDecode");
  return nullptr;
}


static PyObject *
PyvtkURI_Clone_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Clone");

  vtkURI *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURI"))
  {
    vtkSmartPointer<vtkURI> tempr = vtkURI::Clone(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_Clone_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartPointer<vtkURI> tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkURI::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURI_Clone_Methods[] = {
  {"Clone", PyvtkURI_Clone_s1, METH_VARARGS | METH_STATIC,
   "V *vtkURI"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkURI_Clone(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkURI_Clone_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkURI_Clone_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Clone");
  return nullptr;
}


static PyObject *
PyvtkURI_Parse_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Parse");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkURI> tempr = vtkURI::Parse(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_Parse_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Parse");

  const char *temp0 = nullptr;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSmartPointer<vtkURI> tempr = vtkURI::Parse(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURI_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkURI_Parse_s1(self, args);
    case 2:
      return PyvtkURI_Parse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return nullptr;
}


static PyObject *
PyvtkURI_Resolve(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Resolve");

  vtkURI *temp0 = nullptr;
  vtkURI *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkURI") &&
      ap.GetVTKObject(temp1, "vtkURI"))
  {
    vtkSmartPointer<vtkURI> tempr = vtkURI::Resolve(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkURIComponent *tempr = (ap.IsBound() ?
      &op->GetScheme() :
      &op->vtkURI::GetScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkURIComponent");
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetAuthority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAuthority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkURIComponent *tempr = (ap.IsBound() ?
      &op->GetAuthority() :
      &op->vtkURI::GetAuthority());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkURIComponent");
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkURIComponent *tempr = (ap.IsBound() ?
      &op->GetPath() :
      &op->vtkURI::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkURIComponent");
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkURIComponent *tempr = (ap.IsBound() ?
      &op->GetQuery() :
      &op->vtkURI::GetQuery());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkURIComponent");
    }
  }

  return result;
}


static PyObject *
PyvtkURI_GetFragment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkURIComponent *tempr = (ap.IsBound() ?
      &op->GetFragment() :
      &op->vtkURI::GetFragment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkURIComponent");
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsReference() :
      op->vtkURI::IsReference());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRelative() :
      op->vtkURI::IsRelative());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAbsolute() :
      op->vtkURI::IsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsFull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFull() :
      op->vtkURI::IsFull());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsSameDocRef(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSameDocRef");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSameDocRef() :
      op->vtkURI::IsSameDocRef());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkURI::IsEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURI_ToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURI *op = static_cast<vtkURI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->ToString() :
      op->vtkURI::ToString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURI_Methods[] = {
  {"IsTypeOf", PyvtkURI_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkURI_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkURI_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkURI\nC++: static vtkURI *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkURI_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkURI\nC++: vtkURI *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkURI_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkURI_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PercentEncode", PyvtkURI_PercentEncode, METH_VARARGS,
   "PercentEncode(str:str) -> str\nC++: static std::string PercentEncode(const std::string &str)\nPercentEncode(str:str, size:int) -> str\nC++: static std::string PercentEncode(const char *str,\n    std::size_t size)\n\nCalls `PercentEncode(str.data(), str.size())`\n\n@param str Input string to encode, may be empty.\n@return Encodes string from `str`\n"},
  {"PercentDecode", PyvtkURI_PercentDecode, METH_VARARGS,
   "PercentDecode(str:str) -> str\nC++: static std::string PercentDecode(const std::string &str)\nPercentDecode(str:str, size:int) -> str\nC++: static std::string PercentDecode(const char *str,\n    std::size_t size)\n\nCalls `PercentDecode(str.data(), str.size())`\n\n@param str Input string to decode, may be empty.\n@return Decoded string from `str`\n"},
  {"Clone", PyvtkURI_Clone, METH_VARARGS,
   "Clone(other:vtkURI) -> vtkURI\nC++: static vtkSmartPointer<vtkURI> Clone(const vtkURI *other)\nClone(self) -> vtkURI\nC++: vtkSmartPointer<vtkURI> Clone()\n\nClone a vtkURI\n\n@param other vtkURI to clone\n@return if `other == nullptr` returns nullptr, otherwise returns\n    a new vtkURI\nwith the exact same components as `other`\n"},
  {"Parse", PyvtkURI_Parse, METH_VARARGS,
   "Parse(uri:str) -> vtkURI\nC++: static vtkSmartPointer<vtkURI> Parse(const std::string &uri)\nParse(uri:str, size:int) -> vtkURI\nC++: static vtkSmartPointer<vtkURI> Parse(const char *uri,\n    std::size_t size)\n\nCreate a new URI from a string.\n\nPerform as if by calling `vtkURI::Parse(uri.data(), uri.size())`.\n\n@param uri the URI string representation, may be empty.\n@return nullptr if URI syntax checks do not pass, otherwise a new\nvtkURI.\n"},
  {"Resolve", PyvtkURI_Resolve, METH_VARARGS,
   "Resolve(baseURI:vtkURI, uri:vtkURI) -> vtkURI\nC++: static vtkSmartPointer<vtkURI> Resolve(const vtkURI *baseURI,\n     const vtkURI *uri)\n\nResolve an URI from a base URI\n\nThis implements\n[RFC3986](https://datatracker.ietf.org/doc/html/rfc3986#section-5)\n. Base URI are used to compose absolute URIs from relative\nreference.\n\n@param baseURI the base URI, if nullptr, this function only\n    checks if `uri` is a complete URI\n@param uri relative reference that needs to be resolved from\n    `baseURI`\n@return nullptr if URI syntax checks do not pass, otherwise a new\nvtkURI.\n"},
  {"GetScheme", PyvtkURI_GetScheme, METH_VARARGS,
   "GetScheme(self) -> vtkURIComponent\nC++: const vtkURIComponent &GetScheme()\n\nURI scheme.\n"},
  {"GetAuthority", PyvtkURI_GetAuthority, METH_VARARGS,
   "GetAuthority(self) -> vtkURIComponent\nC++: const vtkURIComponent &GetAuthority()\n\nURI authority.\n"},
  {"GetPath", PyvtkURI_GetPath, METH_VARARGS,
   "GetPath(self) -> vtkURIComponent\nC++: const vtkURIComponent &GetPath()\n\nURI path.\n"},
  {"GetQuery", PyvtkURI_GetQuery, METH_VARARGS,
   "GetQuery(self) -> vtkURIComponent\nC++: const vtkURIComponent &GetQuery()\n\nURI query.\n"},
  {"GetFragment", PyvtkURI_GetFragment, METH_VARARGS,
   "GetFragment(self) -> vtkURIComponent\nC++: const vtkURIComponent &GetFragment()\n\nURI fragment.\n"},
  {"IsReference", PyvtkURI_IsReference, METH_VARARGS,
   "IsReference(self) -> bool\nC++: bool IsReference()\n\nURI types determination\n\nURI can be either:\n- A full\n  [URI](https://datatracker.ietf.org/doc/html/rfc3986#section-3):\n  It has a scheme.\n- an [URI\n  reference](https://datatracker.ietf.org/doc/html/rfc3986#section\n  -4.1): an URI that is either a relative reference or a full\n  URI.\n- a [relative\n  reference](https://datatracker.ietf.org/doc/html/rfc3986#section\n  -4.2), an URI that refers to data that has to be resolved from\n  a base URI prior to loading. It does not define a scheme but\n  defines at least one other component.\n- an [absolute\n  URI](https://datatracker.ietf.org/doc/html/rfc3986#section-4.3),\n   an URI that can be used as a base URI. It defines a scheme and\nno fragment. It may define other components.\n- a [same-document\n  reference](https://datatracker.ietf.org/doc/html/rfc3986#section\n  -4.4): an URI that defines only a fragment.\n- An empty URI\n"},
  {"IsRelative", PyvtkURI_IsRelative, METH_VARARGS,
   "IsRelative(self) -> bool\nC++: bool IsRelative()\n\n"},
  {"IsAbsolute", PyvtkURI_IsAbsolute, METH_VARARGS,
   "IsAbsolute(self) -> bool\nC++: bool IsAbsolute()\n\n"},
  {"IsFull", PyvtkURI_IsFull, METH_VARARGS,
   "IsFull(self) -> bool\nC++: bool IsFull()\n\n"},
  {"IsSameDocRef", PyvtkURI_IsSameDocRef, METH_VARARGS,
   "IsSameDocRef(self) -> bool\nC++: bool IsSameDocRef()\n\n"},
  {"IsEmpty", PyvtkURI_IsEmpty, METH_VARARGS,
   "IsEmpty(self) -> bool\nC++: bool IsEmpty()\n\n"},
  {"ToString", PyvtkURI_ToString, METH_VARARGS,
   "ToString(self) -> str\nC++: std::string ToString()\n\nContruct the string representation of the URI\n\n@return a string representing the URI\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkURI_Doc =
  "vtkURI - URI representation\n\n"
  "Superclass: vtkObject\n\n"
  "This class is final and immutable.\n"
  "- Use `vtkURI::Parse` to create an URI from its string\n"
  "  representation.\n"
  "- Use `ToString` to get the string representation from an URI.\n"
  "- Use `vtkURI::Make` to create an URI from components directly.\n"
  "- Use `vtkURI::Resolve` to merge two URIs.\n"
  "- Use `vtkURI::Clone` or member `Clone` if you need to copy an URI.\n\n"
  "Other functions are mainly getters for URI components or URI type\n"
  "identification.\n\n"
  "Known limitations:\n"
  "- No [normalized comparison\n"
  "  support](https://datatracker.ietf.org/doc/html/rfc3986#section-6.1)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkURI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkURI", // tp_name
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
  PyvtkURI_Doc, // tp_doc
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

static vtkObjectBase *PyvtkURI_StaticNew()
{
  return vtkURI::New();
}

PyObject *PyvtkURI_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkURI_Type, PyvtkURI_Methods,
    "vtkURI",
 &PyvtkURI_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkURI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkURIComponent_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkURIComponent", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkURI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkURI", o) != 0)
  {
    Py_DECREF(o);
  }

}

