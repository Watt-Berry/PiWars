// python wrapper for vtkXMLCompositeDataSetWriterHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLCompositeDataSetWriterHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLCompositeDataSetWriterHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLCompositeDataSetWriterHelper_ClassNew(); }


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLCompositeDataSetWriterHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCompositeDataSetWriterHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLCompositeDataSetWriterHelper *tempr = vtkXMLCompositeDataSetWriterHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLCompositeDataSetWriterHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCompositeDataSetWriterHelper::NewInstance());

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
PyvtkXMLCompositeDataSetWriterHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLCompositeDataSetWriterHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLCompositeDataSetWriterHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  vtkXMLWriterBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLWriterBase"))
  {
    if (ap.IsBound())
    {
      op->SetWriter(temp0);
    }
    else
    {
      op->vtkXMLCompositeDataSetWriterHelper::SetWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLWriterBase *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkXMLCompositeDataSetWriterHelper::GetWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataSetWriterHelper_WriteDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataSetWriterHelper *op = static_cast<vtkXMLCompositeDataSetWriterHelper *>(vp);

  std::string temp0;
  std::string temp1;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    std::string tempr = (ap.IsBound() ?
      op->WriteDataSet(temp0, temp1, temp2) :
      op->vtkXMLCompositeDataSetWriterHelper::WriteDataSet(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLCompositeDataSetWriterHelper_Methods[] = {
  {"IsTypeOf", PyvtkXMLCompositeDataSetWriterHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLCompositeDataSetWriterHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLCompositeDataSetWriterHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkXMLCompositeDataSetWriterHelper\nC++: static vtkXMLCompositeDataSetWriterHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLCompositeDataSetWriterHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLCompositeDataSetWriterHelper\nC++: vtkXMLCompositeDataSetWriterHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLCompositeDataSetWriterHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLCompositeDataSetWriterHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWriter", PyvtkXMLCompositeDataSetWriterHelper_SetWriter, METH_VARARGS,
   "SetWriter(self, writer:vtkXMLWriterBase) -> None\nC++: void SetWriter(vtkXMLWriterBase *writer)\n\nGet/Set the writer using this helper. This is reference counted.\nSo caller should avoid cycles explicitly.\n"},
  {"GetWriter", PyvtkXMLCompositeDataSetWriterHelper_GetWriter, METH_VARARGS,
   "GetWriter(self) -> vtkXMLWriterBase\nC++: virtual vtkXMLWriterBase *GetWriter()\n\n"},
  {"WriteDataSet", PyvtkXMLCompositeDataSetWriterHelper_WriteDataSet, METH_VARARGS,
   "WriteDataSet(self, path:str, prefix:str, data:vtkDataObject)\n    -> str\nC++: std::string WriteDataSet(const std::string &path,\n    const std::string &prefix, vtkDataObject *data)\n\nWrite a specific dataset to a file. The dataset cannot be a\ncomposite dataset. The implementation uses\n`vtkXMLDataObjectWriter` to find a writer to use. Internally,\nwriters are cached and will be reused when same type of data is\nbeing written out multiple times.\n\nThe filename is created using the `path` and `prefix`. The prefix\nis extended with a `.` where the `` is dictated by the writer\nused. `vtkXMLWriterBase::GetDefaultFileExtension` is used to\nobtain the extension to use for the file written out.\n\nOn success, returns `\n\n.`, otherwise an empty string is returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLCompositeDataSetWriterHelper_Doc =
  "vtkXMLCompositeDataSetWriterHelper - a helper class used by\nvtkXMLWriter2 subclasses that write composite\n       datasets.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLCompositeDataSetWriterHelper is a helper class intended to be\n"
  "used by subclasses of vtkXMLWriter2 that want to write composite\n"
  "datasets. It consolidates the logic to write individual datasets for\n"
  "leaf nodes into separate files.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLCompositeDataSetWriterHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallelXML.vtkXMLCompositeDataSetWriterHelper", // tp_name
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
  PyvtkXMLCompositeDataSetWriterHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLCompositeDataSetWriterHelper_StaticNew()
{
  return vtkXMLCompositeDataSetWriterHelper::New();
}

PyObject *PyvtkXMLCompositeDataSetWriterHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLCompositeDataSetWriterHelper_Type, PyvtkXMLCompositeDataSetWriterHelper_Methods,
    "vtkXMLCompositeDataSetWriterHelper",
 &PyvtkXMLCompositeDataSetWriterHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLCompositeDataSetWriterHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLCompositeDataSetWriterHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLCompositeDataSetWriterHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

