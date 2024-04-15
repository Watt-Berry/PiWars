// python wrapper for vtkXMLDataWriterHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLDataWriterHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLDataWriterHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLDataWriterHelper_ClassNew(); }


static PyObject *
PyvtkXMLDataWriterHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLDataWriterHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLDataWriterHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLDataWriterHelper *tempr = vtkXMLDataWriterHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataWriterHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLDataWriterHelper::NewInstance());

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
PyvtkXMLDataWriterHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLDataWriterHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLDataWriterHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  vtkXMLWriter2 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLWriter2"))
  {
    if (ap.IsBound())
    {
      op->SetWriter(temp0);
    }
    else
    {
      op->vtkXMLDataWriterHelper::SetWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLWriter2 *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkXMLDataWriterHelper::GetWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_OpenFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->OpenFile() :
      op->vtkXMLDataWriterHelper::OpenFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_BeginWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->BeginWriting() :
      op->vtkXMLDataWriterHelper::BeginWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_EndWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->EndWriting() :
      op->vtkXMLDataWriterHelper::EndWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_AddGlobalFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGlobalFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddGlobalFieldData(temp0) :
      op->vtkXMLDataWriterHelper::AddGlobalFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_AddXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddXML(temp0) :
      op->vtkXMLDataWriterHelper::AddXML(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_SetDataSetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetName(temp0);
    }
    else
    {
      op->vtkXMLDataWriterHelper::SetDataSetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_SetDataSetVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDataSetVersion(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataWriterHelper::SetDataSetVersion(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataWriterHelper_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataWriterHelper *op = static_cast<vtkXMLDataWriterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLDataWriterHelper::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataWriterHelper_Methods[] = {
  {"IsTypeOf", PyvtkXMLDataWriterHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLDataWriterHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLDataWriterHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLDataWriterHelper\nC++: static vtkXMLDataWriterHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLDataWriterHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLDataWriterHelper\nC++: vtkXMLDataWriterHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLDataWriterHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLDataWriterHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWriter", PyvtkXMLDataWriterHelper_SetWriter, METH_VARARGS,
   "SetWriter(self, __a:vtkXMLWriter2) -> None\nC++: void SetWriter(vtkXMLWriter2 *)\n\nGet/Set the writer using this helper. Attributes from the writer\nare used to control how data is written out.\n"},
  {"GetWriter", PyvtkXMLDataWriterHelper_GetWriter, METH_VARARGS,
   "GetWriter(self) -> vtkXMLWriter2\nC++: virtual vtkXMLWriter2 *GetWriter()\n\n"},
  {"OpenFile", PyvtkXMLDataWriterHelper_OpenFile, METH_VARARGS,
   "OpenFile(self) -> bool\nC++: bool OpenFile()\n\nThe writing process is split into 4 parts:\n1. `OpenFile` opens the file for writing.\n2. `BeginWriting` begins writing by adding header.\n3. Write the contents. API calls like `AddGlobalFieldData`,\n   `AddXML` can be used for this.\n4. `EndWriting` ends the writing, adding any footers as needed.\n"},
  {"BeginWriting", PyvtkXMLDataWriterHelper_BeginWriting, METH_VARARGS,
   "BeginWriting(self) -> bool\nC++: bool BeginWriting()\n\n"},
  {"EndWriting", PyvtkXMLDataWriterHelper_EndWriting, METH_VARARGS,
   "EndWriting(self) -> bool\nC++: bool EndWriting()\n\n"},
  {"AddGlobalFieldData", PyvtkXMLDataWriterHelper_AddGlobalFieldData, METH_VARARGS,
   "AddGlobalFieldData(self, dataset:vtkCompositeDataSet) -> bool\nC++: bool AddGlobalFieldData(vtkCompositeDataSet *dataset)\n\nAdds global field data for composite dataset.\n"},
  {"AddXML", PyvtkXMLDataWriterHelper_AddXML, METH_VARARGS,
   "AddXML(self, xmlElement:vtkXMLDataElement) -> bool\nC++: bool AddXML(vtkXMLDataElement *xmlElement)\n\nSerialize and add an XML dom described by the `xmlElement` to the\nfile.\n"},
  {"SetDataSetName", PyvtkXMLDataWriterHelper_SetDataSetName, METH_VARARGS,
   "SetDataSetName(self, name:str) -> None\nC++: void SetDataSetName(const std::string &name)\n\nThese methods should be used by the caller to provide necessary\ninformation to the helper to generate a valid header. This is\ncurrently necessary since we are making this class reused parts\nof vtkXMLWriter. When than dependence is severed, this API will\nlikely change.\n"},
  {"SetDataSetVersion", PyvtkXMLDataWriterHelper_SetDataSetVersion, METH_VARARGS,
   "SetDataSetVersion(self, major:int, minor:int) -> None\nC++: void SetDataSetVersion(int major, int minor)\n\n"},
  {"GetDefaultFileExtension", PyvtkXMLDataWriterHelper_GetDefaultFileExtension, METH_VARARGS,
   "GetDefaultFileExtension(self) -> str\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLDataWriterHelper_Doc =
  "vtkXMLDataWriterHelper - helper for vtkXMLWriter2 and subclasses\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLDataWriterHelper is intended to be a helper class used by\n"
  "vtkXMLWriter2 and subclasses to use to write the XML to a file.\n"
  "Currently, this is simply a subclass of vtkXMLWriter with some\n"
  "minimal API exposed. The ultimate goal is to move logic to write XML\n"
  "data to this class and remove the reliance on vtkXMLWriter. To get\n"
  "things off the ground quickly, this is kept as a subclass of\n"
  "vtkXMLWriter for now.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLDataWriterHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallelXML.vtkXMLDataWriterHelper", // tp_name
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
  PyvtkXMLDataWriterHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLDataWriterHelper_StaticNew()
{
  return vtkXMLDataWriterHelper::New();
}

PyObject *PyvtkXMLDataWriterHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLDataWriterHelper_Type, PyvtkXMLDataWriterHelper_Methods,
    "vtkXMLDataWriterHelper",
 &PyvtkXMLDataWriterHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkXMLWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLDataWriterHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLDataWriterHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLDataWriterHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

