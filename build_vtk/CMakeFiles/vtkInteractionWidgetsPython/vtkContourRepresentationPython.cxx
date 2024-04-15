// python wrapper for vtkContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContourRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourRepresentation(PyObject *dict); }
static PyMethodDef PyvtkContourRepresentationPoint_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationPoint");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationPoint *op = new vtkContourRepresentationPoint();

    result = PyVTKSpecialObject_New("vtkContourRepresentationPoint", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationPoint");

  vtkContourRepresentationPoint *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationPoint"))
  {
    vtkContourRepresentationPoint *op = new vtkContourRepresentationPoint(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationPoint", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods[] = {
  {"vtkContourRepresentationPoint", PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2, METH_VARARGS,
   "@W vtkContourRepresentationPoint"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s1(self, args);
    case 1:
      return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationPoint");
  return nullptr;
}


static const char *PyvtkContourRepresentationPoint_Doc =

  "vtkContourRepresentationPoint() -> vtkContourRepresentationPoint\nC++: vtkContourRepresentationPoint()\nvtkContourRepresentationPoint(__a:vtkContourRepresentationPoint)\n    -> vtkContourRepresentationPoint\nC++: vtkContourRepresentationPoint(\n    const &vtkContourRepresentationPoint)\n""\n"
  "vtkContourRepresentationPoint - no description provided.\n\n"
;

static PyObject *
PyvtkContourRepresentationPoint_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(nullptr, args);
}

static void PyvtkContourRepresentationPoint_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationPoint *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationPoint_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourRepresentationPoint_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourRepresentationPoint", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationPoint_Delete, // tp_dealloc
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
  PyvtkContourRepresentationPoint_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationPoint_Doc, // tp_doc
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
  PyvtkContourRepresentationPoint_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationPoint_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationPoint(*static_cast<const vtkContourRepresentationPoint*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkContourRepresentationPoint_TypeNew
extern "C" { PyObject *PyvtkContourRepresentationPoint_TypeNew(); }
#define DECLARED_PyvtkContourRepresentationPoint_TypeNew
#endif

PyObject *PyvtkContourRepresentationPoint_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkContourRepresentationPoint_Type,
    PyvtkContourRepresentationPoint_Methods,
    PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods,
    &PyvtkContourRepresentationPoint_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkContourRepresentationNode_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationNode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationNode *op = new vtkContourRepresentationNode();

    result = PyVTKSpecialObject_New("vtkContourRepresentationNode", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationNode");

  vtkContourRepresentationNode *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationNode"))
  {
    vtkContourRepresentationNode *op = new vtkContourRepresentationNode(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationNode", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods[] = {
  {"vtkContourRepresentationNode", PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2, METH_VARARGS,
   "@W vtkContourRepresentationNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationNode_vtkContourRepresentationNode_s1(self, args);
    case 1:
      return PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationNode");
  return nullptr;
}


static const char *PyvtkContourRepresentationNode_Doc =

  "vtkContourRepresentationNode() -> vtkContourRepresentationNode\nC++: vtkContourRepresentationNode()\nvtkContourRepresentationNode(__a:vtkContourRepresentationNode)\n    -> vtkContourRepresentationNode\nC++: vtkContourRepresentationNode(const &vtkContourRepresentationNode)\n""\n"
  "vtkContourRepresentationNode - no description provided.\n\n"
;

static PyObject *
PyvtkContourRepresentationNode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationNode_vtkContourRepresentationNode(nullptr, args);
}

static void PyvtkContourRepresentationNode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationNode *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationNode_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourRepresentationNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourRepresentationNode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationNode_Delete, // tp_dealloc
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
  PyvtkContourRepresentationNode_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationNode_Doc, // tp_doc
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
  PyvtkContourRepresentationNode_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationNode_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationNode(*static_cast<const vtkContourRepresentationNode*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkContourRepresentationNode_TypeNew
extern "C" { PyObject *PyvtkContourRepresentationNode_TypeNew(); }
#define DECLARED_PyvtkContourRepresentationNode_TypeNew
#endif

PyObject *PyvtkContourRepresentationNode_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkContourRepresentationNode_Type,
    PyvtkContourRepresentationNode_Methods,
    PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods,
    &PyvtkContourRepresentationNode_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkContourRepresentationInternals_ClearNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearNodes");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContourRepresentationInternals *op = static_cast<vtkContourRepresentationInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ClearNodes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_Methods[] = {
  {"ClearNodes", PyvtkContourRepresentationInternals_ClearNodes, METH_VARARGS,
   "ClearNodes(self) -> None\nC++: void ClearNodes()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationInternals *op = new vtkContourRepresentationInternals();

    result = PyVTKSpecialObject_New("vtkContourRepresentationInternals", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationInternals");

  vtkContourRepresentationInternals *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationInternals"))
  {
    vtkContourRepresentationInternals *op = new vtkContourRepresentationInternals(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationInternals", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods[] = {
  {"vtkContourRepresentationInternals", PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2, METH_VARARGS,
   "@W vtkContourRepresentationInternals"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s1(self, args);
    case 1:
      return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationInternals");
  return nullptr;
}


static const char *PyvtkContourRepresentationInternals_Doc =

  "vtkContourRepresentationInternals()\n    -> vtkContourRepresentationInternals\nC++: vtkContourRepresentationInternals()\nvtkContourRepresentationInternals(\n    __a:vtkContourRepresentationInternals)\n    -> vtkContourRepresentationInternals\nC++: vtkContourRepresentationInternals(\n    const &vtkContourRepresentationInternals)\n""\n"
  "vtkContourRepresentationInternals - no description provided.\n\n"
;

static PyObject *
PyvtkContourRepresentationInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(nullptr, args);
}

static void PyvtkContourRepresentationInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationInternals_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourRepresentationInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourRepresentationInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationInternals_Delete, // tp_dealloc
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
  PyvtkContourRepresentationInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationInternals_Doc, // tp_doc
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
  PyvtkContourRepresentationInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationInternals_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationInternals(*static_cast<const vtkContourRepresentationInternals*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkContourRepresentationInternals_TypeNew
extern "C" { PyObject *PyvtkContourRepresentationInternals_TypeNew(); }
#define DECLARED_PyvtkContourRepresentationInternals_TypeNew
#endif

PyObject *PyvtkContourRepresentationInternals_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkContourRepresentationInternals_Type,
    PyvtkContourRepresentationInternals_Methods,
    PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods,
    &PyvtkContourRepresentationInternals_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkContourRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourRepresentation *tempr = vtkContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourRepresentation::NewInstance());

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
PyvtkContourRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContourRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContourRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0));

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
PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_AddNodeAtWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(self, args);
    case 1:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(self, args);
    case 2:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0));

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
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0));

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
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods[] = {
  {"AddNodeAtDisplayPosition", PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1, METH_VARARGS,
   "@P *d"},
  {"AddNodeAtDisplayPosition", PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtDisplayPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_ActivateNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0) :
      op->vtkContourRepresentation::ActivateNode(temp0));

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
PyvtkContourRepresentation_ActivateNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0) :
      op->vtkContourRepresentation::ActivateNode(temp0));

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
PyvtkContourRepresentation_ActivateNode_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0, temp1) :
      op->vtkContourRepresentation::ActivateNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_ActivateNode_Methods[] = {
  {"ActivateNode", PyvtkContourRepresentation_ActivateNode_s1, METH_VARARGS,
   "@P *d"},
  {"ActivateNode", PyvtkContourRepresentation_ActivateNode_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_ActivateNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_ActivateNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_ActivateNode_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ActivateNode");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToWorldPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0));

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
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_SetActiveNodeToWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(self, args);
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0));

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
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0));

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
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods[] = {
  {"SetActiveNodeToDisplayPosition", PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1, METH_VARARGS,
   "@P *d"},
  {"SetActiveNodeToDisplayPosition", PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToDisplayPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_ToggleActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ToggleActiveNodeSelected() :
      op->vtkContourRepresentation::ToggleActiveNodeSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveNodeSelected() :
      op->vtkContourRepresentation::GetActiveNodeSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthNodeSelected(temp0) :
      op->vtkContourRepresentation::GetNthNodeSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthNodeSelected(temp0) :
      op->vtkContourRepresentation::SetNthNodeSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeWorldPosition(temp0) :
      op->vtkContourRepresentation::GetActiveNodeWorldPosition(temp0));

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
PyvtkContourRepresentation_GetActiveNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeWorldOrientation(temp0) :
      op->vtkContourRepresentation::GetActiveNodeWorldOrientation(temp0));

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
PyvtkContourRepresentation_GetActiveNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeDisplayPosition(temp0) :
      op->vtkContourRepresentation::GetActiveNodeDisplayPosition(temp0));

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
PyvtkContourRepresentation_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkContourRepresentation::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeDisplayPosition(temp0, temp1));

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
PyvtkContourRepresentation_GetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_GetNthNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldOrientation(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeWorldOrientation(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1));

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

static PyMethodDef PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods[] = {
  {"SetNthNodeDisplayPosition", PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2, METH_VARARGS,
   "@iP *i"},
  {"SetNthNodeDisplayPosition", PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeDisplayPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(self, args);
    case 3:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeSlope(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeSlope(temp0, temp1));

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
PyvtkContourRepresentation_GetNumberOfIntermediatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntermediatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntermediatePoints(temp0) :
      op->vtkContourRepresentation::GetNumberOfIntermediatePoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::GetIntermediatePointWorldPosition(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddIntermediatePointWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddIntermediatePointWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::AddIntermediatePointWorldPosition(temp0, temp1, temp2));

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
PyvtkContourRepresentation_AddIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s1(self, args);
    case 3:
      return PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddIntermediatePointWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentation_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteLastNode() :
      op->vtkContourRepresentation::DeleteLastNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteActiveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteActiveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteActiveNode() :
      op->vtkContourRepresentation::DeleteActiveNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteNthNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteNthNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteNthNode(temp0) :
      op->vtkContourRepresentation::DeleteNthNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClearAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllNodes();
    }
    else
    {
      op->vtkContourRepresentation::ClearAllNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddNodeOnContour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeOnContour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeOnContour(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeOnContour(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelTolerance(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetPixelTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMinValue() :
      op->vtkContourRepresentation::GetPixelToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMaxValue() :
      op->vtkContourRepresentation::GetPixelToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkContourRepresentation::GetPixelTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWorldTolerance(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetWorldTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMinValue() :
      op->vtkContourRepresentation::GetWorldToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMaxValue() :
      op->vtkContourRepresentation::GetWorldToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldTolerance() :
      op->vtkContourRepresentation::GetWorldTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperation() :
      op->vtkContourRepresentation::GetCurrentOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperation(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperationMinValue() :
      op->vtkContourRepresentation::GetCurrentOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperationMaxValue() :
      op->vtkContourRepresentation::GetCurrentOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToInactive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToInactive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToInactive();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToInactive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToTranslate();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToTranslate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToShift();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToShift();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToScale();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPointPlacer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
  {
    if (ap.IsBound())
    {
      op->SetPointPlacer(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetPointPlacer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkContourRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkContourLineInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContourLineInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetLineInterpolator(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetLineInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourLineInterpolator *tempr = (ap.IsBound() ?
      op->GetLineInterpolator() :
      op->vtkContourRepresentation::GetLineInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = op->ComputeInteractionState(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->StartWidgetInteraction(temp0);

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
PyvtkContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->WidgetInteraction(temp0);

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
PyvtkContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderOverlay(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderOpaqueGeometry(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderTranslucentPolygonalGeometry(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->HasTranslucentPolygonalGeometry();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedLoop(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetClosedLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosedLoop() :
      op->vtkContourRepresentation::GetClosedLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedLoopOn();
    }
    else
    {
      op->vtkContourRepresentation::ClosedLoopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedLoopOff();
    }
    else
    {
      op->vtkContourRepresentation::ClosedLoopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSelectedNodes(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetShowSelectedNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowSelectedNodes() :
      op->vtkContourRepresentation::GetShowSelectedNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSelectedNodesOn();
    }
    else
    {
      op->vtkContourRepresentation::ShowSelectedNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSelectedNodesOff();
    }
    else
    {
      op->vtkContourRepresentation::ShowSelectedNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = op->GetContourRepresentationAsPolyData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNodePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetNodePolyData(temp0);
    }
    else
    {
      op->vtkContourRepresentation::GetNodePolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetRebuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRebuildLocator(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetRebuildLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkContourRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContourRepresentation\nC++: static vtkContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContourRepresentation\nC++: vtkContourRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContourRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContourRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddNodeAtWorldPosition", PyvtkContourRepresentation_AddNodeAtWorldPosition, METH_VARARGS,
   "AddNodeAtWorldPosition(self, x:float, y:float, z:float) -> int\nC++: virtual int AddNodeAtWorldPosition(double x, double y,\n    double z)\nAddNodeAtWorldPosition(self, worldPos:[float, float, float])\n    -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3])\nAddNodeAtWorldPosition(self, worldPos:[float, float, float],\n    worldOrient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nAdd a node at a specific world position. Returns 0 if the node\ncould not be added, 1 otherwise.\n"},
  {"AddNodeAtDisplayPosition", PyvtkContourRepresentation_AddNodeAtDisplayPosition, METH_VARARGS,
   "AddNodeAtDisplayPosition(self, displayPos:[float, float]) -> int\nC++: virtual int AddNodeAtDisplayPosition(double displayPos[2])\nAddNodeAtDisplayPosition(self, displayPos:[int, int]) -> int\nC++: virtual int AddNodeAtDisplayPosition(int displayPos[2])\nAddNodeAtDisplayPosition(self, X:int, Y:int) -> int\nC++: virtual int AddNodeAtDisplayPosition(int X, int Y)\n\nAdd a node at a specific display position. This will be converted\ninto a world position according to the current constraints of the\npoint placer. Return 0 if a point could not be added, 1\notherwise.\n"},
  {"ActivateNode", PyvtkContourRepresentation_ActivateNode, METH_VARARGS,
   "ActivateNode(self, displayPos:[float, float]) -> int\nC++: virtual int ActivateNode(double displayPos[2])\nActivateNode(self, displayPos:[int, int]) -> int\nC++: virtual int ActivateNode(int displayPos[2])\nActivateNode(self, X:int, Y:int) -> int\nC++: virtual int ActivateNode(int X, int Y)\n\nGiven a display position, activate a node. The closest node\nwithin tolerance will be activated. If a node is activated, 1\nwill be returned, otherwise 0 will be returned.\n"},
  {"SetActiveNodeToWorldPosition", PyvtkContourRepresentation_SetActiveNodeToWorldPosition, METH_VARARGS,
   "SetActiveNodeToWorldPosition(self, pos:[float, float, float])\n    -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3])\nSetActiveNodeToWorldPosition(self, pos:[float, float, float],\n    orient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3],\n    double orient[9])\n\nMove the active node to a specified world position. Will return 0\nif there is no active node or the node could not be moved to that\nposition. 1 will be returned on success.\n"},
  {"SetActiveNodeToDisplayPosition", PyvtkContourRepresentation_SetActiveNodeToDisplayPosition, METH_VARARGS,
   "SetActiveNodeToDisplayPosition(self, pos:[float, float]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(double pos[2])\nSetActiveNodeToDisplayPosition(self, pos:[int, int]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int pos[2])\nSetActiveNodeToDisplayPosition(self, X:int, Y:int) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int X, int Y)\n\nMove the active node based on a specified display position. The\ndisplay position will be converted into a world position. If the\nnew position is not valid or there is no active node, a 0 will be\nreturned. Otherwise, on success a 1 will be returned.\n"},
  {"ToggleActiveNodeSelected", PyvtkContourRepresentation_ToggleActiveNodeSelected, METH_VARARGS,
   "ToggleActiveNodeSelected(self) -> int\nC++: virtual int ToggleActiveNodeSelected()\n\nSet/Get whether the active or nth node is selected.\n"},
  {"GetActiveNodeSelected", PyvtkContourRepresentation_GetActiveNodeSelected, METH_VARARGS,
   "GetActiveNodeSelected(self) -> int\nC++: virtual int GetActiveNodeSelected()\n\n"},
  {"GetNthNodeSelected", PyvtkContourRepresentation_GetNthNodeSelected, METH_VARARGS,
   "GetNthNodeSelected(self, __a:int) -> int\nC++: virtual int GetNthNodeSelected(int)\n\n"},
  {"SetNthNodeSelected", PyvtkContourRepresentation_SetNthNodeSelected, METH_VARARGS,
   "SetNthNodeSelected(self, __a:int) -> int\nC++: virtual int SetNthNodeSelected(int)\n\n"},
  {"GetActiveNodeWorldPosition", PyvtkContourRepresentation_GetActiveNodeWorldPosition, METH_VARARGS,
   "GetActiveNodeWorldPosition(self, pos:[float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldPosition(double pos[3])\n\nGet the world position of the active node. Will return 0 if there\nis no active node, or 1 otherwise.\n"},
  {"GetActiveNodeWorldOrientation", PyvtkContourRepresentation_GetActiveNodeWorldOrientation, METH_VARARGS,
   "GetActiveNodeWorldOrientation(self, orient:[float, float, float,\n    float, float, float, float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldOrientation(double orient[9])\n\nGet the world orientation of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {"GetActiveNodeDisplayPosition", PyvtkContourRepresentation_GetActiveNodeDisplayPosition, METH_VARARGS,
   "GetActiveNodeDisplayPosition(self, pos:[float, float]) -> int\nC++: virtual int GetActiveNodeDisplayPosition(double pos[2])\n\nGet the display position of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {"GetNumberOfNodes", PyvtkContourRepresentation_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the number of nodes.\n"},
  {"GetNthNodeDisplayPosition", PyvtkContourRepresentation_GetNthNodeDisplayPosition, METH_VARARGS,
   "GetNthNodeDisplayPosition(self, n:int, pos:[float, float]) -> int\nC++: virtual int GetNthNodeDisplayPosition(int n, double pos[2])\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"GetNthNodeWorldPosition", PyvtkContourRepresentation_GetNthNodeWorldPosition, METH_VARARGS,
   "GetNthNodeWorldPosition(self, n:int, pos:[float, float, float])\n    -> int\nC++: virtual int GetNthNodeWorldPosition(int n, double pos[3])\n\nGet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting).\n"},
  {"GetNthNodeWorldOrientation", PyvtkContourRepresentation_GetNthNodeWorldOrientation, METH_VARARGS,
   "GetNthNodeWorldOrientation(self, n:int, orient:[float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int GetNthNodeWorldOrientation(int n,\n    double orient[9])\n\nGet the nth node's world orientation. Will return 1 on success,\nor 0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"SetNthNodeDisplayPosition", PyvtkContourRepresentation_SetNthNodeDisplayPosition, METH_VARARGS,
   "SetNthNodeDisplayPosition(self, n:int, X:int, Y:int) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int X, int Y)\nSetNthNodeDisplayPosition(self, n:int, pos:[int, int]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int pos[2])\nSetNthNodeDisplayPosition(self, n:int, pos:[float, float]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, double pos[2])\n\nSet the nth node's display position. Display position will be\nconverted into world position according to the constraints of the\npoint placer. Will return 1 on success, or 0 if there are not at\nleast (n+1) nodes (0 based counting) or the world position is not\nvalid.\n"},
  {"SetNthNodeWorldPosition", PyvtkContourRepresentation_SetNthNodeWorldPosition, METH_VARARGS,
   "SetNthNodeWorldPosition(self, n:int, pos:[float, float, float])\n    -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3])\nSetNthNodeWorldPosition(self, n:int, pos:[float, float, float],\n    orient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3],\n    double orient[9])\n\nSet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting) or the\nworld position is not valid according to the point placer.\n"},
  {"GetNthNodeSlope", PyvtkContourRepresentation_GetNthNodeSlope, METH_VARARGS,
   "GetNthNodeSlope(self, idx:int, slope:[float, float, float]) -> int\nC++: virtual int GetNthNodeSlope(int idx, double slope[3])\n\nGet the nth node's slope. Will return 1 on success, or 0 if there\nare not at least (n+1) nodes (0 based counting).\n"},
  {"GetNumberOfIntermediatePoints", PyvtkContourRepresentation_GetNumberOfIntermediatePoints, METH_VARARGS,
   "GetNumberOfIntermediatePoints(self, n:int) -> int\nC++: virtual int GetNumberOfIntermediatePoints(int n)\n\nFor a given node n, get the number of intermediate points between\nthis node and the node at (n+1). If n is the last node and the\nloop is closed, this is the number of intermediate points between\nnode n and node 0. 0 is returned if n is out of range.\n"},
  {"GetIntermediatePointWorldPosition", PyvtkContourRepresentation_GetIntermediatePointWorldPosition, METH_VARARGS,
   "GetIntermediatePointWorldPosition(self, n:int, idx:int,\n    point:[float, float, float]) -> int\nC++: virtual int GetIntermediatePointWorldPosition(int n, int idx,\n     double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {"AddIntermediatePointWorldPosition", PyvtkContourRepresentation_AddIntermediatePointWorldPosition, METH_VARARGS,
   "AddIntermediatePointWorldPosition(self, n:int, point:[float,\n    float, float]) -> int\nC++: virtual int AddIntermediatePointWorldPosition(int n,\n    double point[3])\nAddIntermediatePointWorldPosition(self, n:int, point:[float,\n    float, float], ptId:int) -> int\nC++: virtual int AddIntermediatePointWorldPosition(int n,\n    double point[3], vtkIdType ptId)\n\nAdd an intermediate point between node n and n+1 (or n and 0 if n\nis the last node and the loop is closed). Returns 1 on success or\n0 if n is out of range.\n"},
  {"DeleteLastNode", PyvtkContourRepresentation_DeleteLastNode, METH_VARARGS,
   "DeleteLastNode(self) -> int\nC++: virtual int DeleteLastNode()\n\nDelete the last node. Returns 1 on success or 0 if there were not\nany nodes.\n"},
  {"DeleteActiveNode", PyvtkContourRepresentation_DeleteActiveNode, METH_VARARGS,
   "DeleteActiveNode(self) -> int\nC++: virtual int DeleteActiveNode()\n\nDelete the active node. Returns 1 on success or 0 if the active\nnode did not indicate a valid node.\n"},
  {"DeleteNthNode", PyvtkContourRepresentation_DeleteNthNode, METH_VARARGS,
   "DeleteNthNode(self, n:int) -> int\nC++: virtual int DeleteNthNode(int n)\n\nDelete the nth node. Return 1 on success or 0 if n is out of\nrange.\n"},
  {"ClearAllNodes", PyvtkContourRepresentation_ClearAllNodes, METH_VARARGS,
   "ClearAllNodes(self) -> None\nC++: virtual void ClearAllNodes()\n\nDelete all nodes.\n"},
  {"AddNodeOnContour", PyvtkContourRepresentation_AddNodeOnContour, METH_VARARGS,
   "AddNodeOnContour(self, X:int, Y:int) -> int\nC++: virtual int AddNodeOnContour(int X, int Y)\n\nGiven a specific X, Y pixel location, add a new node on the\ncontour at this location.\n"},
  {"SetPixelTolerance", PyvtkContourRepresentation_SetPixelTolerance, METH_VARARGS,
   "SetPixelTolerance(self, _arg:int) -> None\nC++: virtual void SetPixelTolerance(int _arg)\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {"GetPixelToleranceMinValue", PyvtkContourRepresentation_GetPixelToleranceMinValue, METH_VARARGS,
   "GetPixelToleranceMinValue(self) -> int\nC++: virtual int GetPixelToleranceMinValue()\n\n"},
  {"GetPixelToleranceMaxValue", PyvtkContourRepresentation_GetPixelToleranceMaxValue, METH_VARARGS,
   "GetPixelToleranceMaxValue(self) -> int\nC++: virtual int GetPixelToleranceMaxValue()\n\n"},
  {"GetPixelTolerance", PyvtkContourRepresentation_GetPixelTolerance, METH_VARARGS,
   "GetPixelTolerance(self) -> int\nC++: virtual int GetPixelTolerance()\n\n"},
  {"SetWorldTolerance", PyvtkContourRepresentation_SetWorldTolerance, METH_VARARGS,
   "SetWorldTolerance(self, _arg:float) -> None\nC++: virtual void SetWorldTolerance(double _arg)\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {"GetWorldToleranceMinValue", PyvtkContourRepresentation_GetWorldToleranceMinValue, METH_VARARGS,
   "GetWorldToleranceMinValue(self) -> float\nC++: virtual double GetWorldToleranceMinValue()\n\n"},
  {"GetWorldToleranceMaxValue", PyvtkContourRepresentation_GetWorldToleranceMaxValue, METH_VARARGS,
   "GetWorldToleranceMaxValue(self) -> float\nC++: virtual double GetWorldToleranceMaxValue()\n\n"},
  {"GetWorldTolerance", PyvtkContourRepresentation_GetWorldTolerance, METH_VARARGS,
   "GetWorldTolerance(self) -> float\nC++: virtual double GetWorldTolerance()\n\n"},
  {"GetCurrentOperation", PyvtkContourRepresentation_GetCurrentOperation, METH_VARARGS,
   "GetCurrentOperation(self) -> int\nC++: virtual int GetCurrentOperation()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperation", PyvtkContourRepresentation_SetCurrentOperation, METH_VARARGS,
   "SetCurrentOperation(self, _arg:int) -> None\nC++: virtual void SetCurrentOperation(int _arg)\n\n"},
  {"GetCurrentOperationMinValue", PyvtkContourRepresentation_GetCurrentOperationMinValue, METH_VARARGS,
   "GetCurrentOperationMinValue(self) -> int\nC++: virtual int GetCurrentOperationMinValue()\n\n"},
  {"GetCurrentOperationMaxValue", PyvtkContourRepresentation_GetCurrentOperationMaxValue, METH_VARARGS,
   "GetCurrentOperationMaxValue(self) -> int\nC++: virtual int GetCurrentOperationMaxValue()\n\n"},
  {"SetCurrentOperationToInactive", PyvtkContourRepresentation_SetCurrentOperationToInactive, METH_VARARGS,
   "SetCurrentOperationToInactive(self) -> None\nC++: void SetCurrentOperationToInactive()\n\n"},
  {"SetCurrentOperationToTranslate", PyvtkContourRepresentation_SetCurrentOperationToTranslate, METH_VARARGS,
   "SetCurrentOperationToTranslate(self) -> None\nC++: void SetCurrentOperationToTranslate()\n\n"},
  {"SetCurrentOperationToShift", PyvtkContourRepresentation_SetCurrentOperationToShift, METH_VARARGS,
   "SetCurrentOperationToShift(self) -> None\nC++: void SetCurrentOperationToShift()\n\n"},
  {"SetCurrentOperationToScale", PyvtkContourRepresentation_SetCurrentOperationToScale, METH_VARARGS,
   "SetCurrentOperationToScale(self) -> None\nC++: void SetCurrentOperationToScale()\n\n"},
  {"SetPointPlacer", PyvtkContourRepresentation_SetPointPlacer, METH_VARARGS,
   "SetPointPlacer(self, __a:vtkPointPlacer) -> None\nC++: void SetPointPlacer(vtkPointPlacer *)\n\nSet / get the Point Placer. The point placer is responsible for\nconverting display coordinates into world coordinates according\nto some constraints, and for validating world positions.\n"},
  {"GetPointPlacer", PyvtkContourRepresentation_GetPointPlacer, METH_VARARGS,
   "GetPointPlacer(self) -> vtkPointPlacer\nC++: virtual vtkPointPlacer *GetPointPlacer()\n\nSet / get the Point Placer. The point placer is responsible for\nconverting display coordinates into world coordinates according\nto some constraints, and for validating world positions.\n"},
  {"SetLineInterpolator", PyvtkContourRepresentation_SetLineInterpolator, METH_VARARGS,
   "SetLineInterpolator(self, __a:vtkContourLineInterpolator) -> None\nC++: void SetLineInterpolator(vtkContourLineInterpolator *)\n\nSet / Get the Line Interpolator. The line interpolator is\nresponsible for generating the line segments connecting nodes.\n"},
  {"GetLineInterpolator", PyvtkContourRepresentation_GetLineInterpolator, METH_VARARGS,
   "GetLineInterpolator(self) -> vtkContourLineInterpolator\nC++: virtual vtkContourLineInterpolator *GetLineInterpolator()\n\n"},
  {"BuildRepresentation", PyvtkContourRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override = 0;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modified:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override = 0;\n\n"},
  {"StartWidgetInteraction", PyvtkContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override = 0;\n\n"},
  {"WidgetInteraction", PyvtkContourRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override = 0;\n\n"},
  {"ReleaseGraphicsResources", PyvtkContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkContourRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override = 0;\n\n"},
  {"RenderOpaqueGeometry", PyvtkContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override = 0;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override = 0;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override = 0;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetClosedLoop", PyvtkContourRepresentation_SetClosedLoop, METH_VARARGS,
   "SetClosedLoop(self, val:int) -> None\nC++: void SetClosedLoop(vtkTypeBool val)\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {"GetClosedLoop", PyvtkContourRepresentation_GetClosedLoop, METH_VARARGS,
   "GetClosedLoop(self) -> int\nC++: virtual vtkTypeBool GetClosedLoop()\n\n"},
  {"ClosedLoopOn", PyvtkContourRepresentation_ClosedLoopOn, METH_VARARGS,
   "ClosedLoopOn(self) -> None\nC++: virtual void ClosedLoopOn()\n\n"},
  {"ClosedLoopOff", PyvtkContourRepresentation_ClosedLoopOff, METH_VARARGS,
   "ClosedLoopOff(self) -> None\nC++: virtual void ClosedLoopOff()\n\n"},
  {"SetShowSelectedNodes", PyvtkContourRepresentation_SetShowSelectedNodes, METH_VARARGS,
   "SetShowSelectedNodes(self, __a:int) -> None\nC++: virtual void SetShowSelectedNodes(vtkTypeBool)\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"GetShowSelectedNodes", PyvtkContourRepresentation_GetShowSelectedNodes, METH_VARARGS,
   "GetShowSelectedNodes(self) -> int\nC++: virtual vtkTypeBool GetShowSelectedNodes()\n\n"},
  {"ShowSelectedNodesOn", PyvtkContourRepresentation_ShowSelectedNodesOn, METH_VARARGS,
   "ShowSelectedNodesOn(self) -> None\nC++: virtual void ShowSelectedNodesOn()\n\n"},
  {"ShowSelectedNodesOff", PyvtkContourRepresentation_ShowSelectedNodesOff, METH_VARARGS,
   "ShowSelectedNodesOff(self) -> None\nC++: virtual void ShowSelectedNodesOff()\n\n"},
  {"GetContourRepresentationAsPolyData", PyvtkContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "GetContourRepresentationAsPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetContourRepresentationAsPolyData()\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"GetNodePolyData", PyvtkContourRepresentation_GetNodePolyData, METH_VARARGS,
   "GetNodePolyData(self, poly:vtkPolyData) -> None\nC++: void GetNodePolyData(vtkPolyData *poly)\n\nGet the nodes and not the intermediate points in this contour as\na vtkPolyData.\n"},
  {"SetRebuildLocator", PyvtkContourRepresentation_SetRebuildLocator, METH_VARARGS,
   "SetRebuildLocator(self, _arg:bool) -> None\nC++: virtual void SetRebuildLocator(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContourRepresentation_Doc =
  "vtkContourRepresentation - represent the vtkContourWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkContourRepresentation is a superclass for various types of\n"
  "representations for vtkContourWidget.\n\n"
  "@par Managing contour points: The classes\n"
  "vtkContourRepresentationNode, vtkContourRepresentationInternals, and\n"
  "vtkContourRepresentationPoint manage the data structure used to\n"
  "represent nodes and points on a contour. A contour may contain\n"
  "several nodes and several additional points. Nodes are usually the\n"
  "result of user-clicked points on the contour. Additional points are\n"
  "created between nodes to generate a smooth curve using some\n"
  "Interpolator -- see the method SetLineInterpolator.\n\n"
  "@par Managing contour points:\\par The data structure stores both the\n"
  "world and display positions for every point. (This may seem like a\n"
  "duplication.) The default behaviour of this class is to use the\n"
  "WorldPosition to do all the math. Typically a point is added at a\n"
  "given display position. Its corresponding world position is computed\n"
  "using the point placer, and stored. Any query of the display position\n"
  "of a stored point is done via the Renderer, which computes the\n"
  "display position given a world position.\n\n"
  "@par Managing contour points:\\par So why maintain the display\n"
  "position? Consider drawing a contour on a volume widget. You might\n"
  "want the contour to be located at a certain world position in the\n"
  "volume or you might want to be overlaid over the window like an\n"
  "Actor2D. The default behaviour of this class is to provide the former\n"
  "behaviour.\n\n"
  "@par Managing contour points:\\par To achieve the latter behaviour,\n"
  "override the methods that return the display position (to return the\n"
  "set display position instead of computing it from the world\n"
  "positions) and the method BuildLines() to interpolate lines using\n"
  "their display positions instead of world positions.\n\n"
  "@sa\n"
  "vtkContourWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourRepresentation", // tp_name
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
  PyvtkContourRepresentation_Doc, // tp_doc
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

PyObject *PyvtkContourRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContourRepresentation_Type, PyvtkContourRepresentation_Methods,
    "vtkContourRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "Outside", vtkContourRepresentation::Outside },
        { "Nearby", vtkContourRepresentation::Nearby },
        { "Inactive", vtkContourRepresentation::Inactive },
        { "Translate", vtkContourRepresentation::Translate },
        { "Shift", vtkContourRepresentation::Shift },
        { "Scale", vtkContourRepresentation::Scale },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourRepresentationPoint_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationPoint", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentationNode_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationNode", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentationInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationInternals", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

