// python wrapper for vtkJSONRenderWindowExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkJSONRenderWindowExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJSONRenderWindowExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkJSONRenderWindowExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static PyObject *
PyvtkJSONRenderWindowExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJSONRenderWindowExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJSONRenderWindowExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJSONRenderWindowExporter *tempr = vtkJSONRenderWindowExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJSONRenderWindowExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJSONRenderWindowExporter::NewInstance());

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
PyvtkJSONRenderWindowExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkJSONRenderWindowExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkJSONRenderWindowExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_SetSerializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSerializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

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
      op->vtkJSONRenderWindowExporter::SetSerializer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_GetSerializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSerializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVtkJSSceneGraphSerializer *tempr = (ap.IsBound() ?
      op->GetSerializer() :
      op->vtkJSONRenderWindowExporter::GetSerializer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_SetArchiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArchiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  vtkArchiver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkArchiver"))
  {
    if (ap.IsBound())
    {
      op->SetArchiver(temp0);
    }
    else
    {
      op->vtkJSONRenderWindowExporter::SetArchiver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_GetArchiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArchiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArchiver *tempr = (ap.IsBound() ?
      op->GetArchiver() :
      op->vtkJSONRenderWindowExporter::GetArchiver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_WriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteData();
    }
    else
    {
      op->vtkJSONRenderWindowExporter::WriteData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_SetCompactOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompactOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompactOutput(temp0);
    }
    else
    {
      op->vtkJSONRenderWindowExporter::SetCompactOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_GetCompactOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompactOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompactOutput() :
      op->vtkJSONRenderWindowExporter::GetCompactOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_CompactOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompactOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompactOutputOn();
    }
    else
    {
      op->vtkJSONRenderWindowExporter::CompactOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONRenderWindowExporter_CompactOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompactOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONRenderWindowExporter *op = static_cast<vtkJSONRenderWindowExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompactOutputOff();
    }
    else
    {
      op->vtkJSONRenderWindowExporter::CompactOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkJSONRenderWindowExporter_Methods[] = {
  {"IsTypeOf", PyvtkJSONRenderWindowExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJSONRenderWindowExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJSONRenderWindowExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkJSONRenderWindowExporter\nC++: static vtkJSONRenderWindowExporter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJSONRenderWindowExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkJSONRenderWindowExporter\nC++: vtkJSONRenderWindowExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkJSONRenderWindowExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkJSONRenderWindowExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSerializer", PyvtkJSONRenderWindowExporter_SetSerializer, METH_VARARGS,
   "SetSerializer(self, __a:vtkVtkJSSceneGraphSerializer) -> None\nC++: virtual void SetSerializer(vtkVtkJSSceneGraphSerializer *)\n\nSpecify the Serializer object\n"},
  {"GetSerializer", PyvtkJSONRenderWindowExporter_GetSerializer, METH_VARARGS,
   "GetSerializer(self) -> vtkVtkJSSceneGraphSerializer\nC++: virtual vtkVtkJSSceneGraphSerializer *GetSerializer()\n\n"},
  {"SetArchiver", PyvtkJSONRenderWindowExporter_SetArchiver, METH_VARARGS,
   "SetArchiver(self, __a:vtkArchiver) -> None\nC++: virtual void SetArchiver(vtkArchiver *)\n\nSpecify the Archiver object\n"},
  {"GetArchiver", PyvtkJSONRenderWindowExporter_GetArchiver, METH_VARARGS,
   "GetArchiver(self) -> vtkArchiver\nC++: virtual vtkArchiver *GetArchiver()\n\n"},
  {"WriteData", PyvtkJSONRenderWindowExporter_WriteData, METH_VARARGS,
   "WriteData(self) -> None\nC++: void WriteData() override;\n\nWrite scene data.\n"},
  {"SetCompactOutput", PyvtkJSONRenderWindowExporter_SetCompactOutput, METH_VARARGS,
   "SetCompactOutput(self, _arg:bool) -> None\nC++: virtual void SetCompactOutput(bool _arg)\n\nWrite scene in compact form (default is true).\n"},
  {"GetCompactOutput", PyvtkJSONRenderWindowExporter_GetCompactOutput, METH_VARARGS,
   "GetCompactOutput(self) -> bool\nC++: virtual bool GetCompactOutput()\n\n"},
  {"CompactOutputOn", PyvtkJSONRenderWindowExporter_CompactOutputOn, METH_VARARGS,
   "CompactOutputOn(self) -> None\nC++: virtual void CompactOutputOn()\n\n"},
  {"CompactOutputOff", PyvtkJSONRenderWindowExporter_CompactOutputOff, METH_VARARGS,
   "CompactOutputOff(self) -> None\nC++: virtual void CompactOutputOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkJSONRenderWindowExporter_Doc =
  "vtkJSONRenderWindowExporter - Exports a render window for vtk-js\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkJSONRenderWindowExporter constructs a scene graph from an input\n"
  "render window and generates an archive for vtk-js. The traversal of\n"
  "the scene graph topology is handled by graph elements constructed by\n"
  "vtkVtkJSViewNodeFactory, the translation from VTK to vtk-js scene\n"
  "elements (renderers, actors, mappers, etc.) is handled by\n"
  "vtkVtkJSSceneGraphSerializer, and the transcription of data is\n"
  "handled by vtkArchiver. The latter two classes are designed to be\n"
  "extensible via inheritance, and derived instances can be used to\n"
  "modify the vtk-js file format and output mode.\n\n"
  "@sa\n"
  "vtkVtkJSSceneGraphSerializer vtkVtkJSViewNodeFactory\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkJSONRenderWindowExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkJSONRenderWindowExporter", // tp_name
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
  PyvtkJSONRenderWindowExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJSONRenderWindowExporter_StaticNew()
{
  return vtkJSONRenderWindowExporter::New();
}

PyObject *PyvtkJSONRenderWindowExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkJSONRenderWindowExporter_Type, PyvtkJSONRenderWindowExporter_Methods,
    "vtkJSONRenderWindowExporter",
 &PyvtkJSONRenderWindowExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkJSONRenderWindowExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJSONRenderWindowExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJSONRenderWindowExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

