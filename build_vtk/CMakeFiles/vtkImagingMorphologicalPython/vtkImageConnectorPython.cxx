// python wrapper for vtkImageConnector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageConnector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConnector(PyObject *dict); }
static PyMethodDef PyvtkImageConnectorSeed_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageConnectorSeed");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImageConnectorSeed *op = new vtkImageConnectorSeed();

    result = PyVTKSpecialObject_New("vtkImageConnectorSeed", op);
  }

  return result;
}

static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageConnectorSeed");

  vtkImageConnectorSeed *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkImageConnectorSeed"))
  {
    vtkImageConnectorSeed *op = new vtkImageConnectorSeed(*temp0);

    result = PyVTKSpecialObject_New("vtkImageConnectorSeed", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods[] = {
  {"vtkImageConnectorSeed", PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2, METH_VARARGS,
   "@W vtkImageConnectorSeed"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConnectorSeed_vtkImageConnectorSeed_s1(self, args);
    case 1:
      return PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkImageConnectorSeed");
  return nullptr;
}


static const char *PyvtkImageConnectorSeed_Doc =

  "vtkImageConnectorSeed() -> vtkImageConnectorSeed\nC++: vtkImageConnectorSeed()\nvtkImageConnectorSeed(__a:vtkImageConnectorSeed)\n    -> vtkImageConnectorSeed\nC++: vtkImageConnectorSeed(const &vtkImageConnectorSeed)\n""\n"
  "vtkImageConnectorSeed - no description provided.\n\n"
;

static PyObject *
PyvtkImageConnectorSeed_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImageConnectorSeed_vtkImageConnectorSeed(nullptr, args);
}

static void PyvtkImageConnectorSeed_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImageConnectorSeed *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImageConnectorSeed_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConnectorSeed_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageConnectorSeed", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageConnectorSeed_Delete, // tp_dealloc
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
  PyvtkImageConnectorSeed_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImageConnectorSeed_Doc, // tp_doc
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
  PyvtkImageConnectorSeed_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkImageConnectorSeed_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkImageConnectorSeed(*static_cast<const vtkImageConnectorSeed*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkImageConnectorSeed_TypeNew
extern "C" { PyObject *PyvtkImageConnectorSeed_TypeNew(); }
#define DECLARED_PyvtkImageConnectorSeed_TypeNew
#endif

PyObject *PyvtkImageConnectorSeed_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkImageConnectorSeed_Type,
    PyvtkImageConnectorSeed_Methods,
    PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods,
    &PyvtkImageConnectorSeed_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkImageConnector_ClassNew(); }


static PyObject *
PyvtkImageConnector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConnector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConnector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConnector *tempr = vtkImageConnector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConnector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConnector::NewInstance());

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
PyvtkImageConnector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageConnector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageConnector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSeeds();
    }
    else
    {
      op->vtkImageConnector::RemoveAllSeeds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectedValue(temp0);
    }
    else
    {
      op->vtkImageConnector::SetConnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_GetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetConnectedValue() :
      op->vtkImageConnector::GetConnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnconnectedValue(temp0);
    }
    else
    {
      op->vtkImageConnector::SetUnconnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_GetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetUnconnectedValue() :
      op->vtkImageConnector::GetUnconnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_MarkData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->MarkData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageConnector::MarkData(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageConnector_Methods[] = {
  {"IsTypeOf", PyvtkImageConnector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageConnector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageConnector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageConnector\nC++: static vtkImageConnector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageConnector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageConnector\nC++: vtkImageConnector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageConnector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageConnector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveAllSeeds", PyvtkImageConnector_RemoveAllSeeds, METH_VARARGS,
   "RemoveAllSeeds(self) -> None\nC++: void RemoveAllSeeds()\n\n"},
  {"SetConnectedValue", PyvtkImageConnector_SetConnectedValue, METH_VARARGS,
   "SetConnectedValue(self, _arg:int) -> None\nC++: virtual void SetConnectedValue(unsigned char _arg)\n\nValues used by the MarkRegion method\n"},
  {"GetConnectedValue", PyvtkImageConnector_GetConnectedValue, METH_VARARGS,
   "GetConnectedValue(self) -> int\nC++: virtual unsigned char GetConnectedValue()\n\n"},
  {"SetUnconnectedValue", PyvtkImageConnector_SetUnconnectedValue, METH_VARARGS,
   "SetUnconnectedValue(self, _arg:int) -> None\nC++: virtual void SetUnconnectedValue(unsigned char _arg)\n\n"},
  {"GetUnconnectedValue", PyvtkImageConnector_GetUnconnectedValue, METH_VARARGS,
   "GetUnconnectedValue(self) -> int\nC++: virtual unsigned char GetUnconnectedValue()\n\n"},
  {"MarkData", PyvtkImageConnector_MarkData, METH_VARARGS,
   "MarkData(self, data:vtkImageData, dimensionality:int, ext:[int,\n    int, int, int, int, int]) -> None\nC++: void MarkData(vtkImageData *data, int dimensionality,\n    int ext[6])\n\nInput a data of 0's and \"UnconnectedValue\"s. Seeds of this object\nare used to find connected pixels.  All pixels connected to seeds\nare set to ConnectedValue.  The data has to be unsigned char.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageConnector_Doc =
  "vtkImageConnector - Create a binary image of a sphere.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageConnector is a helper class for connectivity filters. It is\n"
  "not meant to be used directly. It implements a stack and breadth\n"
  "first search necessary for some connectivity filters.  Filtered axes\n"
  "sets the dimensionality of the neighbor comparison, and cannot be\n"
  "more than three dimensions. As implemented, only voxels which share\n"
  "faces are considered neighbors.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConnector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageConnector", // tp_name
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
  PyvtkImageConnector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConnector_StaticNew()
{
  return vtkImageConnector::New();
}

PyObject *PyvtkImageConnector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageConnector_Type, PyvtkImageConnector_Methods,
    "vtkImageConnector",
 &PyvtkImageConnector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageConnector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConnectorSeed_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConnectorSeed", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkImageConnector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConnector", o) != 0)
  {
    Py_DECREF(o);
  }

}

