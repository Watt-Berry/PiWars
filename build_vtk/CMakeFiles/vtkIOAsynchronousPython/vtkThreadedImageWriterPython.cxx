// python wrapper for vtkThreadedImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkThreadedImageWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreadedImageWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkThreadedImageWriter_ClassNew(); }


static PyObject *
PyvtkThreadedImageWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreadedImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadedImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreadedImageWriter *tempr = vtkThreadedImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreadedImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadedImageWriter::NewInstance());

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
PyvtkThreadedImageWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkThreadedImageWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkThreadedImageWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkThreadedImageWriter::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_EncodeAndWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAndWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  vtkImageData *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetFilePath(temp1))
  {
    if (ap.IsBound())
    {
      op->EncodeAndWrite(temp0, temp1);
    }
    else
    {
      op->vtkThreadedImageWriter::EncodeAndWrite(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_SetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxThreads(temp0);
    }
    else
    {
      op->vtkThreadedImageWriter::SetMaxThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_GetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxThreads() :
      op->vtkThreadedImageWriter::GetMaxThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageWriter_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageWriter *op = static_cast<vtkThreadedImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkThreadedImageWriter::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThreadedImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkThreadedImageWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreadedImageWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreadedImageWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkThreadedImageWriter\nC++: static vtkThreadedImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreadedImageWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkThreadedImageWriter\nC++: vtkThreadedImageWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkThreadedImageWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkThreadedImageWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkThreadedImageWriter_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nNeed to be called at least once before using the class. Then it\nshould be called again after any change on the thread count or if\nFinalize() was called.\n\nThis method will wait for any running thread to terminate and\nstart a new pool with the given number of threads.\n"},
  {"EncodeAndWrite", PyvtkThreadedImageWriter_EncodeAndWrite, METH_VARARGS,
   "EncodeAndWrite(self, image:vtkImageData, fileName:str) -> None\nC++: void EncodeAndWrite(vtkImageData *image,\n    const char *fileName)\n\nPush an image into the threaded writer. It is not safe to modify\nthe image after this point. You may run into thread safety\nissues. Typically, the caller code will simply release reference\nto the data and stop using it.\n"},
  {"SetMaxThreads", PyvtkThreadedImageWriter_SetMaxThreads, METH_VARARGS,
   "SetMaxThreads(self, __a:int) -> None\nC++: void SetMaxThreads(vtkTypeUInt32)\n\nDefine the number of worker thread to use. Initialize() need to\nbe called after any thread count change.\n"},
  {"GetMaxThreads", PyvtkThreadedImageWriter_GetMaxThreads, METH_VARARGS,
   "GetMaxThreads(self) -> int\nC++: virtual vtkTypeUInt32 GetMaxThreads()\n\n"},
  {"Finalize", PyvtkThreadedImageWriter_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize()\n\nThis method will wait for any running thread to terminate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkThreadedImageWriter_Doc =
  "vtkThreadedImageWriter - class used to compress/write images using\nthreads to prevent\n          locking while encoding data.\n\n"
  "Superclass: vtkObject\n\n"
  "@details  This writer allow to encode an image data based on its file\n"
  "          extension: tif, tiff, bpm, png, jpg, jpeg, vti, Z, ppm, raw\n\n"
  "@author   Patricia Kroll Fasel @ LANL\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkThreadedImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOAsynchronous.vtkThreadedImageWriter", // tp_name
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
  PyvtkThreadedImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreadedImageWriter_StaticNew()
{
  return vtkThreadedImageWriter::New();
}

PyObject *PyvtkThreadedImageWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkThreadedImageWriter_Type, PyvtkThreadedImageWriter_Methods,
    "vtkThreadedImageWriter",
 &PyvtkThreadedImageWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThreadedImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreadedImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreadedImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

