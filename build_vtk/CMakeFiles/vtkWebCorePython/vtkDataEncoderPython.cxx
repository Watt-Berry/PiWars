// python wrapper for vtkDataEncoder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataEncoder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataEncoder(PyObject *dict); }
extern "C" { PyObject *PyvtkDataEncoder_ClassNew(); }


static PyObject *
PyvtkDataEncoder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataEncoder *tempr = vtkDataEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataEncoder::NewInstance());

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
PyvtkDataEncoder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataEncoder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataEncoder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_SetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

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
      op->vtkDataEncoder::SetMaxThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_GetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxThreads() :
      op->vtkDataEncoder::GetMaxThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataEncoder::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  vtkImageData *temp1 = nullptr;
  int temp2;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->Push(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataEncoder::Push(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_GetLatestOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatestOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  vtkSmartPointer<vtkUnsignedCharArray> temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLatestOutput(temp0, temp1) :
      op->vtkDataEncoder::GetLatestOutput(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Flush(temp0);
    }
    else
    {
      op->vtkDataEncoder::Flush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_EncodeAsBase64Png(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAsBase64Png");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1 = 5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->EncodeAsBase64Png(temp0, temp1) :
      op->vtkDataEncoder::EncodeAsBase64Png(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_EncodeAsBase64Jpg(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAsBase64Jpg");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1 = 50;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->EncodeAsBase64Jpg(temp0, temp1) :
      op->vtkDataEncoder::EncodeAsBase64Jpg(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkDataEncoder::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataEncoder_Methods[] = {
  {"IsTypeOf", PyvtkDataEncoder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataEncoder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataEncoder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataEncoder\nC++: static vtkDataEncoder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataEncoder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataEncoder\nC++: vtkDataEncoder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataEncoder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataEncoder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaxThreads", PyvtkDataEncoder_SetMaxThreads, METH_VARARGS,
   "SetMaxThreads(self, __a:int) -> None\nC++: void SetMaxThreads(vtkTypeUInt32)\n\nDefine the number of worker threads to use. Default is 3.\nInitialize() needs to be called after changing the thread count.\n"},
  {"GetMaxThreads", PyvtkDataEncoder_GetMaxThreads, METH_VARARGS,
   "GetMaxThreads(self) -> int\nC++: virtual vtkTypeUInt32 GetMaxThreads()\n\n"},
  {"Initialize", PyvtkDataEncoder_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nRe-initializes the encoder. This will abort any on going encoding\nthreads and clear internal data-structures.\n"},
  {"Push", PyvtkDataEncoder_Push, METH_VARARGS,
   "Push(self, key:int, data:vtkImageData, quality:int,\n    encoding:int=1) -> None\nC++: void Push(vtkTypeUInt32 key, vtkImageData *data, int quality,\n     int encoding=1)\n\nPush an image into the encoder. The data is considered unchanging\nand thus should not be modified once pushed. Reference count\nchanges are now thread safe and hence callers should ensure they\nrelease the reference held, if appropriate.\n"},
  {"GetLatestOutput", PyvtkDataEncoder_GetLatestOutput, METH_VARARGS,
   "GetLatestOutput(self, key:int, data:vtkUnsignedCharArray) -> bool\nC++: bool GetLatestOutput(vtkTypeUInt32 key,\n    vtkSmartPointer<vtkUnsignedCharArray> &data)\n\nGet access to the most-recent fully encoded result corresponding\nto the given key, if any. This methods returns true if the data\nobtained is the result from the most recent Push() for the key,\nif any. If this method returns false, it means that there's some\nimage either being processed on pending processing.\n"},
  {"Flush", PyvtkDataEncoder_Flush, METH_VARARGS,
   "Flush(self, key:int) -> None\nC++: void Flush(vtkTypeUInt32 key)\n\nFlushes the encoding pipe and blocks till the most recently\npushed image for the particular key has been processed. This call\nwill block. Once this method returns, caller can use\nGetLatestOutput(key) to access the processed output.\n"},
  {"EncodeAsBase64Png", PyvtkDataEncoder_EncodeAsBase64Png, METH_VARARGS,
   "EncodeAsBase64Png(self, img:vtkImageData, compressionLevel:int=5)\n    -> str\nC++: const char *EncodeAsBase64Png(vtkImageData *img,\n    int compressionLevel=5)\n\nTake an image data and synchronously convert it to a base-64\nencoded png.\n"},
  {"EncodeAsBase64Jpg", PyvtkDataEncoder_EncodeAsBase64Jpg, METH_VARARGS,
   "EncodeAsBase64Jpg(self, img:vtkImageData, quality:int=50) -> str\nC++: const char *EncodeAsBase64Jpg(vtkImageData *img,\n    int quality=50)\n\nTake an image data and synchronously convert it to a base-64\nencoded jpg.\n"},
  {"Finalize", PyvtkDataEncoder_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize()\n\nThis method will wait for any running thread to terminate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataEncoder_Doc =
  "vtkDataEncoder - class used to compress/encode images using threads.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataEncoder is used to compress and encode images using threads.\n"
  "Multiple images can be pushed into the encoder for compression and\n"
  "encoding. We use a vtkTypeUInt32 as the key to identify different\n"
  "image pipes. The images in each pipe will be processed in parallel\n"
  "threads. The latest compressed and encoded image can be accessed\n"
  "using GetLatestOutput().\n\n"
  "vtkDataEncoder uses a thread-pool to do the compression and encoding\n"
  "in parallel.  Note that images may not come out of the vtkDataEncoder\n"
  "in the same order as they are pushed in, if an image pushed in at\n"
  "N-th location takes longer to compress and encode than that pushed in\n"
  "at N+1-th location or if it was pushed in before the N-th location\n"
  "was even taken up for encoding by the a thread in the thread pool.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebCore.vtkDataEncoder", // tp_name
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
  PyvtkDataEncoder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataEncoder_StaticNew()
{
  return vtkDataEncoder::New();
}

PyObject *PyvtkDataEncoder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataEncoder_Type, PyvtkDataEncoder_Methods,
    "vtkDataEncoder",
 &PyvtkDataEncoder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

