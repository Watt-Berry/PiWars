// python wrapper for vtkVtkJSViewNodeFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVtkJSViewNodeFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVtkJSViewNodeFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkVtkJSViewNodeFactory_ClassNew(); }


static PyObject *
PyvtkVtkJSViewNodeFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVtkJSViewNodeFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSViewNodeFactory *op = static_cast<vtkVtkJSViewNodeFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVtkJSViewNodeFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVtkJSViewNodeFactory *tempr = vtkVtkJSViewNodeFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSViewNodeFactory *op = static_cast<vtkVtkJSViewNodeFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVtkJSViewNodeFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVtkJSViewNodeFactory::NewInstance());

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
PyvtkVtkJSViewNodeFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVtkJSViewNodeFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSViewNodeFactory *op = static_cast<vtkVtkJSViewNodeFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVtkJSViewNodeFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_SetSerializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSerializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSViewNodeFactory *op = static_cast<vtkVtkJSViewNodeFactory *>(vp);

  vtkVtkJSSceneGraphSerializer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVtkJSSceneGraphSerializer"))
  {
    if (ap.IsBound())
    {
      op->SetSerializer(temp0);
    }
    else
    {
      op->vtkVtkJSViewNodeFactory::SetSerializer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSViewNodeFactory_GetSerializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSerializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSViewNodeFactory *op = static_cast<vtkVtkJSViewNodeFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVtkJSSceneGraphSerializer *tempr = (ap.IsBound() ?
      op->GetSerializer() :
      op->vtkVtkJSViewNodeFactory::GetSerializer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVtkJSViewNodeFactory_Methods[] = {
  {"IsTypeOf", PyvtkVtkJSViewNodeFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVtkJSViewNodeFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVtkJSViewNodeFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVtkJSViewNodeFactory\nC++: static vtkVtkJSViewNodeFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVtkJSViewNodeFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVtkJSViewNodeFactory\nC++: vtkVtkJSViewNodeFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVtkJSViewNodeFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVtkJSViewNodeFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSerializer", PyvtkVtkJSViewNodeFactory_SetSerializer, METH_VARARGS,
   "SetSerializer(self, __a:vtkVtkJSSceneGraphSerializer) -> None\nC++: void SetSerializer(vtkVtkJSSceneGraphSerializer *)\n\nSpecify the Serializer object\n"},
  {"GetSerializer", PyvtkVtkJSViewNodeFactory_GetSerializer, METH_VARARGS,
   "GetSerializer(self) -> vtkVtkJSSceneGraphSerializer\nC++: virtual vtkVtkJSSceneGraphSerializer *GetSerializer()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVtkJSViewNodeFactory_Doc =
  "vtkVtkJSViewNodeFactory - Constructs view nodes for traversing a\nscene for vtk-js\n\n"
  "Superclass: vtkViewNodeFactory\n\n"
  "vtkVtkJSViewNodeFactory constructs view nodes that are subsequently\n"
  "executed as a scene graph is traversed. The generated view nodes\n"
  "inherit from vtkViewNode and augment the synchronize and render\n"
  "traversal steps to construct Json representations of the scene\n"
  "elements and to update the pipelines associated with the datasets to\n"
  "render, respectively.\n\n"
  "@sa\n"
  "vtkVtkJSSceneGraphSerializer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVtkJSViewNodeFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVtkJS.vtkVtkJSViewNodeFactory", // tp_name
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
  PyvtkVtkJSViewNodeFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVtkJSViewNodeFactory_StaticNew()
{
  return vtkVtkJSViewNodeFactory::New();
}

PyObject *PyvtkVtkJSViewNodeFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVtkJSViewNodeFactory_Type, PyvtkVtkJSViewNodeFactory_Methods,
    "vtkVtkJSViewNodeFactory",
 &PyvtkVtkJSViewNodeFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkViewNodeFactory");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVtkJSViewNodeFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVtkJSViewNodeFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVtkJSViewNodeFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

