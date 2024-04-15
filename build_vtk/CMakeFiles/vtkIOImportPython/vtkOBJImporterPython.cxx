// python wrapper for vtkOBJImporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOBJImporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOBJImporter(PyObject *dict); }
extern "C" { PyObject *PyvtkOBJImporter_ClassNew(); }

#ifndef DECLARED_PyvtkImporter_ClassNew
extern "C" { PyObject *PyvtkImporter_ClassNew(); }
#define DECLARED_PyvtkImporter_ClassNew
#endif

static PyObject *
PyvtkOBJImporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOBJImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBJImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOBJImporter *tempr = vtkOBJImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOBJImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBJImporter::NewInstance());

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
PyvtkOBJImporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOBJImporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOBJImporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkOBJImporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SetFileNameMTL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMTL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameMTL(temp0);
    }
    else
    {
      op->vtkOBJImporter::SetFileNameMTL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SetTexturePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturePath(temp0);
    }
    else
    {
      op->vtkOBJImporter::SetTexturePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkOBJImporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetFileNameMTL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMTL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileNameMTL() :
      op->vtkOBJImporter::GetFileNameMTL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetTexturePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTexturePath() :
      op->vtkOBJImporter::GetTexturePath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetOutputsDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputsDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputsDescription() :
      op->vtkOBJImporter::GetOutputsDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetOutputDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputDescription(temp0) :
      op->vtkOBJImporter::GetOutputDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOBJImporter_Methods[] = {
  {"IsTypeOf", PyvtkOBJImporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOBJImporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOBJImporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOBJImporter\nC++: static vtkOBJImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOBJImporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOBJImporter\nC++: vtkOBJImporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOBJImporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOBJImporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkOBJImporter_SetFileName, METH_VARARGS,
   "SetFileName(self, arg:str) -> None\nC++: void SetFileName(const char *arg)\n\nSpecify the name of the file to read.\n"},
  {"SetFileNameMTL", PyvtkOBJImporter_SetFileNameMTL, METH_VARARGS,
   "SetFileNameMTL(self, arg:str) -> None\nC++: void SetFileNameMTL(const char *arg)\n\n"},
  {"SetTexturePath", PyvtkOBJImporter_SetTexturePath, METH_VARARGS,
   "SetTexturePath(self, path:str) -> None\nC++: void SetTexturePath(const char *path)\n\n"},
  {"GetFileName", PyvtkOBJImporter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: const char *GetFileName()\n\n"},
  {"GetFileNameMTL", PyvtkOBJImporter_GetFileNameMTL, METH_VARARGS,
   "GetFileNameMTL(self) -> str\nC++: const char *GetFileNameMTL()\n\n"},
  {"GetTexturePath", PyvtkOBJImporter_GetTexturePath, METH_VARARGS,
   "GetTexturePath(self) -> str\nC++: const char *GetTexturePath()\n\n"},
  {"GetOutputsDescription", PyvtkOBJImporter_GetOutputsDescription, METH_VARARGS,
   "GetOutputsDescription(self) -> str\nC++: std::string GetOutputsDescription() override;\n\nGet a printable string describing all outputs\n"},
  {"GetOutputDescription", PyvtkOBJImporter_GetOutputDescription, METH_VARARGS,
   "GetOutputDescription(self, idx:int) -> str\nC++: std::string GetOutputDescription(int idx)\n\nGet a string describing an output\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOBJImporter_Doc =
  "vtkOBJImporter - import from .obj wavefront files\n\n"
  "Superclass: vtkImporter\n\n"
  "from Wavefront .obj & associated .mtl files.@par Thanks - Peter\n"
  "Karasev (Georgia Tech / Keysight Technologies Inc),:\n"
  "                  Allen Tannenbaum (SUNY Stonybrook), Patricio Vela\n"
  "(Georgia Tech)\n"
  "@sa\n"
  " vtkImporter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOBJImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtkOBJImporter", // tp_name
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
  PyvtkOBJImporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOBJImporter_StaticNew()
{
  return vtkOBJImporter::New();
}

PyObject *PyvtkOBJImporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOBJImporter_Type, PyvtkOBJImporter_Methods,
    "vtkOBJImporter",
 &PyvtkOBJImporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOBJImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOBJImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOBJImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

