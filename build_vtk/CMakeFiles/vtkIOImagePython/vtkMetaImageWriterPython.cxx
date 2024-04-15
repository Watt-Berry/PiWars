// python wrapper for vtkMetaImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMetaImageWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMetaImageWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkMetaImageWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static PyObject *
PyvtkMetaImageWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMetaImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMetaImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMetaImageWriter *tempr = vtkMetaImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMetaImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMetaImageWriter::NewInstance());

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
PyvtkMetaImageWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMetaImageWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMetaImageWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

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
      op->vtkMetaImageWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMetaImageWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetRAWFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRAWFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRAWFileName(temp0);
    }
    else
    {
      op->vtkMetaImageWriter::SetRAWFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetRAWFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRAWFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRAWFileName() :
      op->vtkMetaImageWriter::GetRAWFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompression(temp0);
    }
    else
    {
      op->vtkMetaImageWriter::SetCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompression() :
      op->vtkMetaImageWriter::GetCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkMetaImageWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMetaImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkMetaImageWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMetaImageWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMetaImageWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMetaImageWriter\nC++: static vtkMetaImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMetaImageWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMetaImageWriter\nC++: vtkMetaImageWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMetaImageWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMetaImageWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMetaImageWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, fname:str) -> None\nC++: void SetFileName(const char *fname) override;\n\nSpecify file name of meta file\n"},
  {"GetFileName", PyvtkMetaImageWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: char *GetFileName() override;\n\n"},
  {"SetRAWFileName", PyvtkMetaImageWriter_SetRAWFileName, METH_VARARGS,
   "SetRAWFileName(self, fname:str) -> None\nC++: virtual void SetRAWFileName(const char *fname)\n\nSpecify the file name of the raw image data.\n"},
  {"GetRAWFileName", PyvtkMetaImageWriter_GetRAWFileName, METH_VARARGS,
   "GetRAWFileName(self) -> str\nC++: virtual char *GetRAWFileName()\n\n"},
  {"SetCompression", PyvtkMetaImageWriter_SetCompression, METH_VARARGS,
   "SetCompression(self, compress:bool) -> None\nC++: virtual void SetCompression(bool compress)\n\n"},
  {"GetCompression", PyvtkMetaImageWriter_GetCompression, METH_VARARGS,
   "GetCompression(self) -> bool\nC++: virtual bool GetCompression()\n\n"},
  {"Write", PyvtkMetaImageWriter_Write, METH_VARARGS,
   "Write(self) -> None\nC++: void Write() override;\n\nThe main interface which triggers the writer to start.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMetaImageWriter_Doc =
  "vtkMetaImageWriter - write a binary UNC meta image data\n\n"
  "Superclass: vtkImageWriter\n\n"
  "One of the formats for which a reader is already available in the\n"
  "toolkit is the MetaImage file format. This is a fairly simple yet\n"
  "powerful format consisting of a text header and a binary data\n"
  "section. The following instructions describe how you can write a\n"
  "MetaImage header for the data that you download from the BrainWeb\n"
  "page.\n\n"
  "The minimal structure of the MetaImage header is the following:\n\n\n"
  "   NDims = 3\n"
  "   DimSize = 181 217 181\n"
  "   ElementType = MET_UCHAR\n"
  "   ElementSpacing = 1.0 1.0 1.0\n"
  "   ElementByteOrderMSB = False\n"
  "   ElementDataFile = brainweb1.raw\n\n"
  "* NDims indicate that this is a 3D image. ITK can handle images of\n"
  "  arbitrary dimension.\n"
  "* DimSize indicates the size of the volume in pixels along each\n"
  "  direction.\n"
  "* ElementType indicate the primitive type used for pixels. In this\n"
  "  case is \"unsigned char\", implying that the data is digitized in 8\n"
  "  bits / pixel.\n"
  "* ElementSpacing indicates the physical separation between the center\n"
  "of one pixel and the center of the next pixel along each direction in\n"
  "space. The units used are millimeters.\n"
  "* ElementByteOrderMSB indicates is the data is encoded in little or\n"
  "  big endian order. You might want to play with this value when\n"
  "  moving data between different computer platforms.\n"
  "* ElementDataFile is the name of the file containing the raw binary\n"
  "  data of the image. This file must be in the same directory as the\n"
  "  header.\n\n"
  "MetaImage headers are expected to have extension: \".mha\" or \".mhd\"\n\n"
  "Once you write this header text file, it should be possible to read\n"
  "the image into your ITK based application using the\n"
  "itk::FileIOToImageFilter class.\n\n"
  "@sa\n"
  "vtkImageWriter vtkMetaImageReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMetaImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkMetaImageWriter", // tp_name
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
  PyvtkMetaImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMetaImageWriter_StaticNew()
{
  return vtkMetaImageWriter::New();
}

PyObject *PyvtkMetaImageWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMetaImageWriter_Type, PyvtkMetaImageWriter_Methods,
    "vtkMetaImageWriter",
 &PyvtkMetaImageWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMetaImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMetaImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMetaImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

