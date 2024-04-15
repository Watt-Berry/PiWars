// python wrapper for vtkDataCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataCompressor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataCompressor(PyObject *dict); }
extern "C" { PyObject *PyvtkDataCompressor_ClassNew(); }


static PyObject *
PyvtkDataCompressor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataCompressor *tempr = vtkDataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataCompressor::NewInstance());

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
PyvtkDataCompressor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataCompressor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataCompressor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t tempr = op->GetMaximumCompressionSpace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_Compress_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    size_t tempr = (ap.IsBound() ?
      op->Compress(temp0, temp1, temp2, temp3) :
      op->vtkDataCompressor::Compress(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataCompressor_Compress_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->Compress(temp0, temp1) :
      op->vtkDataCompressor::Compress(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataCompressor_Compress(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataCompressor_Compress_s1(self, args);
    case 2:
      return PyvtkDataCompressor_Compress_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Compress");
  return nullptr;
}


static PyObject *
PyvtkDataCompressor_Uncompress_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Uncompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    size_t tempr = (ap.IsBound() ?
      op->Uncompress(temp0, temp1, temp2, temp3) :
      op->vtkDataCompressor::Uncompress(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataCompressor_Uncompress_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Uncompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->Uncompress(temp0, temp1, temp2) :
      op->vtkDataCompressor::Uncompress(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataCompressor_Uncompress(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataCompressor_Uncompress_s1(self, args);
    case 3:
      return PyvtkDataCompressor_Uncompress_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Uncompress");
  return nullptr;
}


static PyObject *
PyvtkDataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCompressionLevel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetCompressionLevel();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataCompressor_Methods[] = {
  {"IsTypeOf", PyvtkDataCompressor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataCompressor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataCompressor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataCompressor\nC++: static vtkDataCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataCompressor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataCompressor\nC++: vtkDataCompressor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataCompressor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataCompressor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMaximumCompressionSpace", PyvtkDataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   "GetMaximumCompressionSpace(self, size:int) -> int\nC++: virtual size_t GetMaximumCompressionSpace(size_t size)\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {"Compress", PyvtkDataCompressor_Compress, METH_VARARGS,
   "Compress(self, uncompressedData:(int, ...), uncompressedSize:int,\n    compressedData:[int, ...], compressionSpace:int) -> int\nC++: size_t Compress(unsigned char const *uncompressedData,\n    size_t uncompressedSize, unsigned char *compressedData,\n    size_t compressionSpace)\nCompress(self, uncompressedData:(int, ...), uncompressedSize:int)\n    -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *Compress(\n    unsigned char const *uncompressedData,\n    size_t uncompressedSize)\n\nCompress the given input data buffer into the given output\nbuffer.  The size of the output buffer must be at least as large\nas the value given by GetMaximumCompressionSpace for the given\ninput size.\n"},
  {"Uncompress", PyvtkDataCompressor_Uncompress, METH_VARARGS,
   "Uncompress(self, compressedData:(int, ...), compressedSize:int,\n    uncompressedData:[int, ...], uncompressedSize:int) -> int\nC++: size_t Uncompress(unsigned char const *compressedData,\n    size_t compressedSize, unsigned char *uncompressedData,\n    size_t uncompressedSize)\nUncompress(self, compressedData:(int, ...), compressedSize:int,\n    uncompressedSize:int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *Uncompress(\n    unsigned char const *compressedData, size_t compressedSize,\n    size_t uncompressedSize)\n\nUncompress the given input data into the given output buffer. The\nsize of the uncompressed data must be known by the caller. It\nshould be transmitted from the compressor by a means outside of\nthis class.\n"},
  {"SetCompressionLevel", PyvtkDataCompressor_SetCompressionLevel, METH_VARARGS,
   "SetCompressionLevel(self, compressionLevel:int) -> None\nC++: virtual void SetCompressionLevel(int compressionLevel)\n\nCompression performance varies greatly with compression level\nRequire level setting from any vtkDataCompressor Different\ncompressors handle performance parameters differently\nvtkDataCompressors should take a value between 1 and 9 where 1 is\nfastest compression, and 9 is best compression.\n"},
  {"GetCompressionLevel", PyvtkDataCompressor_GetCompressionLevel, METH_VARARGS,
   "GetCompressionLevel(self) -> int\nC++: virtual int GetCompressionLevel()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataCompressor_Doc =
  "vtkDataCompressor - Abstract interface for data compression classes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataCompressor provides a universal interface for data\n"
  "compression.  Subclasses provide one compression method and one\n"
  "decompression method.  The public interface to all compressors\n"
  "remains the same, and is defined by this class.\n\n"
  "@par Note: vtkDataCompressor CompressionLevel maye take on values 1\n"
  "to 9. With values of 1 giving best compression write performance, and\n"
  "a value of 9 giving best compression ratio. Subclasses of\n"
  "vtkDataCompressor objects should be implemented with this in mind to\n"
  "provide a predictable compressor interface for vtkDataCompressor\n"
  "users.\n\n"
  "@par Thanks: Homogeneous CompressionLevel behavior contributed by\n"
  "Quincy Wofford (qwofford@lanl.gov) and John Patchett\n"
  "(patchett@lanl.gov)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkDataCompressor", // tp_name
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
  PyvtkDataCompressor_Doc, // tp_doc
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

PyObject *PyvtkDataCompressor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataCompressor_Type, PyvtkDataCompressor_Methods,
    "vtkDataCompressor",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

