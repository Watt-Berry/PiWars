// python wrapper for vtkImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReader(PyObject *dict); }
extern "C" { PyObject *PyvtkImageReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static PyObject *
PyvtkImageReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReader *tempr = vtkImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader::NewInstance());

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
PyvtkImageReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetDataVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageReader::SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataVOI(temp0);
    }
    else
    {
      op->vtkImageReader::SetDataVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageReader_SetDataVOI_s1(self, args);
    case 1:
      return PyvtkImageReader_SetDataVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataVOI");
  return nullptr;
}


static PyObject *
PyvtkImageReader_GetDataVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataVOI() :
      op->vtkImageReader::GetDataVOI());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDataMask() :
      op->vtkImageReader::GetDataMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataMask(temp0);
    }
    else
    {
      op->vtkImageReader::SetDataMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkImageReader::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImageReader::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_ComputeInverseTransformedExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeInverseTransformedExtent(temp0, temp1);
    }
    else
    {
      op->vtkImageReader::ComputeInverseTransformedExtent(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_ComputeInverseTransformedIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 3;
  long long temp0[3];
  long long save0[3];
  const size_t size1 = 3;
  long long temp1[3];
  long long save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeInverseTransformedIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageReader::ComputeInverseTransformedIncrements(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_OpenAndSeekFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenAndSeekFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->OpenAndSeekFile(temp0, temp1) :
      op->vtkImageReader::OpenAndSeekFile(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArrayName(temp0);
    }
    else
    {
      op->vtkImageReader::SetScalarArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkImageReader::GetScalarArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReader_Methods[] = {
  {"IsTypeOf", PyvtkImageReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageReader\nC++: static vtkImageReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageReader\nC++: vtkImageReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataVOI", PyvtkImageReader_SetDataVOI, METH_VARARGS,
   "SetDataVOI(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetDataVOI(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetDataVOI(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetDataVOI(const int _arg[6])\n\nSet/get the data VOI. You can limit the reader to only read a\nsubset of the data.\n"},
  {"GetDataVOI", PyvtkImageReader_GetDataVOI, METH_VARARGS,
   "GetDataVOI(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetDataVOI()\n\n"},
  {"GetDataMask", PyvtkImageReader_GetDataMask, METH_VARARGS,
   "GetDataMask(self) -> int\nC++: virtual vtkTypeUInt64 GetDataMask()\n\nSet/Get the Data mask.  The data mask is a simply integer whose\nbits are treated as a mask to the bits read from disk.  That is,\nthe data mask is bitwise-and'ed to the numbers read from disk. \nThis ivar is stored as 64 bits, the largest mask you will need. \nThe mask will be truncated to the data size required to be read\n(using the least significant bits).\n"},
  {"SetDataMask", PyvtkImageReader_SetDataMask, METH_VARARGS,
   "SetDataMask(self, _arg:int) -> None\nC++: virtual void SetDataMask(vtkTypeUInt64 _arg)\n\n"},
  {"SetTransform", PyvtkImageReader_SetTransform, METH_VARARGS,
   "SetTransform(self, __a:vtkTransform) -> None\nC++: virtual void SetTransform(vtkTransform *)\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {"GetTransform", PyvtkImageReader_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\n"},
  {"ComputeInverseTransformedExtent", PyvtkImageReader_ComputeInverseTransformedExtent, METH_VARARGS,
   "ComputeInverseTransformedExtent(self, inExtent:[int, int, int,\n    int, int, int], outExtent:[int, int, int, int, int, int])\n    -> None\nC++: void ComputeInverseTransformedExtent(int inExtent[6],\n    int outExtent[6])\n\n"},
  {"ComputeInverseTransformedIncrements", PyvtkImageReader_ComputeInverseTransformedIncrements, METH_VARARGS,
   "ComputeInverseTransformedIncrements(self, inIncr:[int, int, int],\n    outIncr:[int, int, int]) -> None\nC++: void ComputeInverseTransformedIncrements(vtkIdType inIncr[3],\n     vtkIdType outIncr[3])\n\n"},
  {"OpenAndSeekFile", PyvtkImageReader_OpenAndSeekFile, METH_VARARGS,
   "OpenAndSeekFile(self, extent:[int, int, int, int, int, int],\n    slice:int) -> int\nC++: int OpenAndSeekFile(int extent[6], int slice)\n\n"},
  {"SetScalarArrayName", PyvtkImageReader_SetScalarArrayName, METH_VARARGS,
   "SetScalarArrayName(self, _arg:str) -> None\nC++: virtual void SetScalarArrayName(const char *_arg)\n\nSet/get the scalar array name for this data set.\n"},
  {"GetScalarArrayName", PyvtkImageReader_GetScalarArrayName, METH_VARARGS,
   "GetScalarArrayName(self) -> str\nC++: virtual char *GetScalarArrayName()\n\n"},
  {"CanReadFile", PyvtkImageReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, __a:str) -> int\nC++: int CanReadFile(const char *) override;\n\nvtkImageReader itself can read raw binary files. That being the\ncase, we need to implement `CanReadFile` to return success for\nany file. Subclasses that read specific file format should\noverride and implement appropriate checks for file format.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageReader_Doc =
  "vtkImageReader - Superclass of transformable binary file readers.\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkImageReader provides methods needed to read a region from a file.\n"
  "It supports both transforms and masks on the input data, but as a\n"
  "result is more complicated and slower than its parent class\n"
  "vtkImageReader2.\n\n"
  "@sa\n"
  "vtkBMPReader vtkPNMReader vtkTIFFReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkImageReader", // tp_name
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
  PyvtkImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReader_StaticNew()
{
  return vtkImageReader::New();
}

PyObject *PyvtkImageReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageReader_Type, PyvtkImageReader_Methods,
    "vtkImageReader",
 &PyvtkImageReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

