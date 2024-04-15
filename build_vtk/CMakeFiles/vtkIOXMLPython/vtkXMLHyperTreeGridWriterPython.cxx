// python wrapper for vtkXMLHyperTreeGridWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLHyperTreeGridWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLHyperTreeGridWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLHyperTreeGridWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLWriter_ClassNew
extern "C" { PyObject *PyvtkXMLWriter_ClassNew(); }
#define DECLARED_PyvtkXMLWriter_ClassNew
#endif

static PyObject *
PyvtkXMLHyperTreeGridWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLHyperTreeGridWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHyperTreeGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLHyperTreeGridWriter *tempr = vtkXMLHyperTreeGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLHyperTreeGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHyperTreeGridWriter::NewInstance());

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
PyvtkXMLHyperTreeGridWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLHyperTreeGridWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLHyperTreeGridWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLHyperTreeGridWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLHyperTreeGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_SetDataSetMajorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetMajorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetMajorVersion(temp0);
    }
    else
    {
      op->vtkXMLHyperTreeGridWriter::SetDataSetMajorVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridWriter_SetDataSetMinorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetMinorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridWriter *op = static_cast<vtkXMLHyperTreeGridWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetMinorVersion(temp0);
    }
    else
    {
      op->vtkXMLHyperTreeGridWriter::SetDataSetMinorVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLHyperTreeGridWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLHyperTreeGridWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLHyperTreeGridWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLHyperTreeGridWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLHyperTreeGridWriter\nC++: static vtkXMLHyperTreeGridWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLHyperTreeGridWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLHyperTreeGridWriter\nC++: vtkXMLHyperTreeGridWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLHyperTreeGridWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLHyperTreeGridWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkXMLHyperTreeGridWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {"GetDefaultFileExtension", PyvtkXMLHyperTreeGridWriter_GetDefaultFileExtension, METH_VARARGS,
   "GetDefaultFileExtension(self) -> str\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {"SetDataSetMajorVersion", PyvtkXMLHyperTreeGridWriter_SetDataSetMajorVersion, METH_VARARGS,
   "SetDataSetMajorVersion(self, _arg:int) -> None\nC++: virtual void SetDataSetMajorVersion(int _arg)\n\nMethods to define the file's major and minor version numbers.\nMajor version incremented since v0.1 hypertreegrid data readers\ncannot read the files written by this new reader. A version is\ndefined by defect, so there is no need to call this function. The\ndefault choice is usually the best choice.\n"},
  {"SetDataSetMinorVersion", PyvtkXMLHyperTreeGridWriter_SetDataSetMinorVersion, METH_VARARGS,
   "SetDataSetMinorVersion(self, _arg:int) -> None\nC++: virtual void SetDataSetMinorVersion(int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLHyperTreeGridWriter_Doc =
  "vtkXMLHyperTreeGridWriter - Write VTK XML HyperTreeGrid files.\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLHyperTreeGridWriter writes the VTK XML HyperTreeGrid file\n"
  "format. The standard extension for this writer's file format is\n"
  "\"htg\".\n\n"
  "Note for developers: The VTK XML HyperTreeGrid file format is\n"
  "versioned. Any evolution of the format must lead to:\n"
  "- a move to a higher major version number, X+1.0, if the evolution is\n"
  "  incompatible with the previous versions either at the level of the\n"
  "  description of the information or the semantic understanding made\n"
  "  by the reader;\n"
  "- a move to a higher minor version number, X.y+1, if its consists of\n"
  "  adding information without calling into question the general\n"
  "  interpretation.\n\n"
  "Version 0.0 (P. Fasel and D. DeMarle) ... Version 1.0 (J-B Lekien\n"
  "CEA, DAM, DIF, F-91297 Arpajon, France)\n"
  "- writing by HyperTree description and fields;\n"
  "- saving the minimal tree (a hidden refined node becomes a hidden\n"
  "  leaf node);\n"
  "- saving the tree by level of refinement (course in width);\n"
  "- the last null values in the binary description of the tree or mask\n"
  "  (if defined) may not / are not explicitly described. The size of\n"
  "  the table given elsewhere is authentic;\n"
  "- all fields are copied to be saved in the implicit order, so even if\n"
  "an explicit global index map exists, it disappears;\n"
  "- writing in this version requires more memory and CPU;\n"
  "- reading of a part is accelerated (non iterative construction of the\n"
  "tree) and consumes potentially less memory (suppression of the global\n"
  "index map explicit);\n"
  "- expanded possibility at the reader level, today these options allow\n"
  "to accelerate the obtaining of a result which will be less precise\n"
  "  and to allow the loading of a part of a mesh which would not hold\n"
  "  in memory:\n"
  "- loading by limiting the maximum level to load;\n"
  "- loading by selecting (different description possibilities are\n"
  "  offered) the HTs to take into account.\n\n"
  "The default version of the VTK XML HyperTreeGrid file format is the\n"
  "latest version, now version 1.0.\n\n"
  "For developers: To ensure the durability of this storage format over\n"
  "time, at least, the drive must continue to support playback of\n"
  "previous format.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLHyperTreeGridWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLHyperTreeGridWriter", // tp_name
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
  PyvtkXMLHyperTreeGridWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLHyperTreeGridWriter_StaticNew()
{
  return vtkXMLHyperTreeGridWriter::New();
}

PyObject *PyvtkXMLHyperTreeGridWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLHyperTreeGridWriter_Type, PyvtkXMLHyperTreeGridWriter_Methods,
    "vtkXMLHyperTreeGridWriter",
 &PyvtkXMLHyperTreeGridWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLHyperTreeGridWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLHyperTreeGridWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLHyperTreeGridWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

