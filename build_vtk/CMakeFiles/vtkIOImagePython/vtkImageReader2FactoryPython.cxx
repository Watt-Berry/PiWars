// python wrapper for vtkImageReader2Factory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageReader2Factory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReader2Factory(PyObject *dict); }
extern "C" { PyObject *PyvtkImageReader2Factory_ClassNew(); }


static PyObject *
PyvtkImageReader2Factory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReader2Factory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader2Factory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReader2Factory *tempr = vtkImageReader2Factory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReader2Factory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader2Factory::NewInstance());

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
PyvtkImageReader2Factory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageReader2Factory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageReader2Factory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_RegisterReader(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterReader");

  vtkImageReader2 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2"))
  {
    vtkImageReader2Factory::RegisterReader(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_CreateImageReader2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateImageReader2");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageReader2 *tempr = vtkImageReader2Factory::CreateImageReader2(temp0);

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
PyvtkImageReader2Factory_CreateImageReader2FromExtension(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateImageReader2FromExtension");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageReader2 *tempr = vtkImageReader2Factory::CreateImageReader2FromExtension(temp0);

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
PyvtkImageReader2Factory_GetRegisteredReaders(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredReaders");

  vtkImageReader2Collection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2Collection"))
  {
    vtkImageReader2Factory::GetRegisteredReaders(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_CheckExtensionIsInExtensions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CheckExtensionIsInExtensions");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkImageReader2Factory::CheckExtensionIsInExtensions(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReader2Factory_Methods[] = {
  {"IsTypeOf", PyvtkImageReader2Factory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReader2Factory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReader2Factory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageReader2Factory\nC++: static vtkImageReader2Factory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReader2Factory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageReader2Factory\nC++: vtkImageReader2Factory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageReader2Factory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageReader2Factory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RegisterReader", PyvtkImageReader2Factory_RegisterReader, METH_VARARGS,
   "RegisterReader(r:vtkImageReader2) -> None\nC++: static void RegisterReader(vtkImageReader2 *r)\n\nregistered readers will be queried in CreateImageReader2 to see\nif they can load a given file.\n"},
  {"CreateImageReader2", PyvtkImageReader2Factory_CreateImageReader2, METH_VARARGS,
   "CreateImageReader2(path:str) -> vtkImageReader2\nC++: static vtkImageReader2 *CreateImageReader2(const char *path)\n\nopen the image file, it is the callers responsibility to call\nDelete on the returned object. If no reader is found, nullptr is\nreturned.\n"},
  {"CreateImageReader2FromExtension", PyvtkImageReader2Factory_CreateImageReader2FromExtension, METH_VARARGS,
   "CreateImageReader2FromExtension(extension:str) -> vtkImageReader2\nC++: static vtkImageReader2 *CreateImageReader2FromExtension(\n    const char *extension)\n\nCreate a vtkImageReader2 from a (dotted or not) file extension.\nIf multiple readers support the same extension, only one reader\nwill be returned. It is the callers responsibility to call Delete\non the returned object. If no reader is found, nullptr is\nreturned.\n"},
  {"GetRegisteredReaders", PyvtkImageReader2Factory_GetRegisteredReaders, METH_VARARGS,
   "GetRegisteredReaders(__a:vtkImageReader2Collection) -> None\nC++: static void GetRegisteredReaders(vtkImageReader2Collection *)\n\nThe caller must allocate the vtkImageReader2Collection and pass\nin the pointer to this method.\n"},
  {"CheckExtensionIsInExtensions", PyvtkImageReader2Factory_CheckExtensionIsInExtensions, METH_VARARGS,
   "CheckExtensionIsInExtensions(extension:str, extensions:str)\n    -> bool\nC++: static bool CheckExtensionIsInExtensions(\n    const char *extension, const char *extensions)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageReader2Factory_Doc =
  "vtkImageReader2Factory - Superclass of binary file readers.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageReader2Factory: This class is used to create a\n"
  "vtkImageReader2 object given a path name to a file.  It calls\n"
  "CanReadFile on all available readers until one of them returns true. \n"
  "The available reader list comes from three places.  In the\n"
  "InitializeReaders function of this class, built-in VTK classes are\n"
  "added to the list, users can call RegisterReader, or users can create\n"
  "a vtkObjectFactory that has CreateObject method that returns a new\n"
  "vtkImageReader2 sub class when given the string\n"
  "\"vtkImageReaderObject\".  This way applications can be extended with\n"
  "new readers via a plugin dll or by calling RegisterReader. Of course\n"
  "all of the readers that are part of the vtk release are made\n"
  "automatically available.\n\n"
  "@sa\n"
  "vtkImageReader2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageReader2Factory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkImageReader2Factory", // tp_name
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
  PyvtkImageReader2Factory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReader2Factory_StaticNew()
{
  return vtkImageReader2Factory::New();
}

PyObject *PyvtkImageReader2Factory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageReader2Factory_Type, PyvtkImageReader2Factory_Methods,
    "vtkImageReader2Factory",
 &PyvtkImageReader2Factory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageReader2Factory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReader2Factory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReader2Factory", o) != 0)
  {
    Py_DECREF(o);
  }

}

