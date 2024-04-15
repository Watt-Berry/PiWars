// python wrapper for vtkBase64Utilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBase64Utilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBase64Utilities(PyObject *dict); }
extern "C" { PyObject *PyvtkBase64Utilities_ClassNew(); }


static PyObject *
PyvtkBase64Utilities_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBase64Utilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBase64Utilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBase64Utilities *tempr = vtkBase64Utilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBase64Utilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBase64Utilities::NewInstance());

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
PyvtkBase64Utilities_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBase64Utilities::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBase64Utilities::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodeTriplet(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodeTriplet");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<unsigned char> store6(2*size6);
  unsigned char *temp6 = store6.Data();
  unsigned char *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    vtkBase64Utilities::EncodeTriplet(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodePair(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodePair");

  unsigned char temp0;
  unsigned char temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkBase64Utilities::EncodePair(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodeSingle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodeSingle");

  unsigned char temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkBase64Utilities::EncodeSingle(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_Encode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Encode");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  unsigned long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    unsigned long tempr = vtkBase64Utilities::Encode(temp0, temp1, temp2, temp3);

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
PyvtkBase64Utilities_DecodeTriplet(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecodeTriplet");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<unsigned char> store6(2*size6);
  unsigned char *temp6 = store6.Data();
  unsigned char *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    int tempr = vtkBase64Utilities::DecodeTriplet(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64Utilities_DecodeSafely(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecodeSafely");

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

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    size_t tempr = vtkBase64Utilities::DecodeSafely(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkBase64Utilities_Methods[] = {
  {"IsTypeOf", PyvtkBase64Utilities_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBase64Utilities_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBase64Utilities_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBase64Utilities\nC++: static vtkBase64Utilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBase64Utilities_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBase64Utilities\nC++: vtkBase64Utilities *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBase64Utilities_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBase64Utilities_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EncodeTriplet", PyvtkBase64Utilities_EncodeTriplet, METH_VARARGS,
   "EncodeTriplet(i0:int, i1:int, i2:int, o0:[int, ...], o1:[int,\n    ...], o2:[int, ...], o3:[int, ...]) -> None\nC++: static void EncodeTriplet(unsigned char i0, unsigned char i1,\n     unsigned char i2, unsigned char *o0, unsigned char *o1,\n    unsigned char *o2, unsigned char *o3)\n\nEncode 3 bytes into 4 bytes\n"},
  {"EncodePair", PyvtkBase64Utilities_EncodePair, METH_VARARGS,
   "EncodePair(i0:int, i1:int, o0:[int, ...], o1:[int, ...], o2:[int,\n    ...], o3:[int, ...]) -> None\nC++: static void EncodePair(unsigned char i0, unsigned char i1,\n    unsigned char *o0, unsigned char *o1, unsigned char *o2,\n    unsigned char *o3)\n\nEncode 2 bytes into 4 bytes\n"},
  {"EncodeSingle", PyvtkBase64Utilities_EncodeSingle, METH_VARARGS,
   "EncodeSingle(i0:int, o0:[int, ...], o1:[int, ...], o2:[int, ...],\n    o3:[int, ...]) -> None\nC++: static void EncodeSingle(unsigned char i0, unsigned char *o0,\n     unsigned char *o1, unsigned char *o2, unsigned char *o3)\n\nEncode 1 byte into 4 bytes\n"},
  {"Encode", PyvtkBase64Utilities_Encode, METH_VARARGS,
   "Encode(input:(int, ...), length:int, output:[int, ...],\n    mark_end:int=0) -> int\nC++: static unsigned long Encode(const unsigned char *input,\n    unsigned long length, unsigned char *output, int mark_end=0)\n\nEncode 'length' bytes from the input buffer and store the encoded\nstream into the output buffer. Return the length of the encoded\nstream. Note that the output buffer must be allocated by the\ncaller (length * 1.5 should be a safe estimate). If 'mark_end' is\ntrue then an extra set of 4 bytes is added to the end of the\nstream if the input is a multiple of 3 bytes. These bytes are\ninvalid chars and therefore they will stop the decoder thus\nenabling the caller to decode a stream without actually knowing\nhow much data to expect (if the input is not a multiple of 3\nbytes then the extra padding needed to complete the encode 4\nbytes will stop the decoding anyway).\n"},
  {"DecodeTriplet", PyvtkBase64Utilities_DecodeTriplet, METH_VARARGS,
   "DecodeTriplet(i0:int, i1:int, i2:int, i3:int, o0:[int, ...],\n    o1:[int, ...], o2:[int, ...]) -> int\nC++: static int DecodeTriplet(unsigned char i0, unsigned char i1,\n    unsigned char i2, unsigned char i3, unsigned char *o0,\n    unsigned char *o1, unsigned char *o2)\n\nDecode 4 bytes into 3 bytes. Return the number of bytes actually\ndecoded (0 to 3, inclusive).\n"},
  {"DecodeSafely", PyvtkBase64Utilities_DecodeSafely, METH_VARARGS,
   "DecodeSafely(input:(int, ...), inputLen:int, output:[int, ...],\n    outputLen:int) -> int\nC++: static size_t DecodeSafely(const unsigned char *input,\n    size_t inputLen, unsigned char *output, size_t outputLen)\n\nDecode 4 bytes at a time from the input buffer and store the\ndecoded stream into the output buffer. The required output buffer\nsize must be determined and allocated by the caller. The needed\noutput space is always less than the input buffer size, so a good\nfirst order approximation is to allocate the same size. Base64\nencoding is about 4/3 overhead, so a tighter bound is possible.\nReturn the number of bytes atually placed into the output buffer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBase64Utilities_Doc =
  "vtkBase64Utilities - base64 encode and decode utilities.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkBase64Utilities implements base64 encoding and decoding.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBase64Utilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkBase64Utilities", // tp_name
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
  PyvtkBase64Utilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBase64Utilities_StaticNew()
{
  return vtkBase64Utilities::New();
}

PyObject *PyvtkBase64Utilities_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBase64Utilities_Type, PyvtkBase64Utilities_Methods,
    "vtkBase64Utilities",
 &PyvtkBase64Utilities_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBase64Utilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBase64Utilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBase64Utilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

